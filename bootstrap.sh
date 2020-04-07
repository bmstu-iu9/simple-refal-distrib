#!/bin/bash

chmod +x bootstrap.sh clear.sh bin/sr{efc,make}

source ./scripts/load-config.sh . || exit 1
source ./scripts/platform-specific.sh

APPENDER=rasl-appender/_rasl-appender$(platform_exe_suffix)
$CPPLINEE$APPENDER rasl-appender/rasl-appender.cpp $CPPLINEESUF || exit 1

make_dir() {
  DIR=$1
  TARGET=bin/$2$(platform_exe_suffix)

  if [[ "$3" == "DEBUG" ]]; then
    DEBUGDIR=debug
  else
    DEBUGDIR=debug-stubs
  fi

  echo ... compile $2
  FILELIST=$(ls $DIR/*.cpp)
  $CPPLINEE$TARGET \
    -Ilib/scratch-rt \
    -Ilib/scratch-rt/$DEBUGDIR \
    $FILELIST \
    $(platform_subdir_lookup lib/scratch-rt)/refalrts-platform-specific.cpp \
    lib/scratch-rt/platform-POSIX/refalrts-platform-POSIX.cpp \
    $CPPLINEESUF

  if [ ! -e $TARGET ]; then
    echo "Can't create file $TARGET, aborting"
    exit 1
  fi

  $APPENDER $TARGET $DIR/*.rasl || exit 1
}

make_dir compiler rlc-core
make_dir lexgen rl-lexgen
make_dir interpreter rlgo DEBUG
make_dir make rlmake-core
make_dir rsl-decompiler rl-rsl-decompiler

cp bin/{rlc,srefc}-core$(platform_exe_suffix)
cp bin/{rl-,}lexgen$(platform_exe_suffix)
cp bin/{rl,sr}make-core$(platform_exe_suffix)
cp bin/{rl-,}rsl-decompiler$(platform_exe_suffix)

( cd lib-prefixes && ./make.sh ) || exit 1

for L in Hash Library GetOpt LibraryEx Platform; do
  bin/rlmake --scratch -X-OCdDPRS --makelib "lib/src/$L" \
    -o "lib/$L$(platform_lib_suffix)" || exit 1
done

rm -f $APPENDER
