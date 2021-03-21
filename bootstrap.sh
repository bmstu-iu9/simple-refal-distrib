#!/bin/bash

chmod +x bootstrap.sh clear.sh bin/rl{c,make} lib-prefixes/make.sh

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

  PLATFORM="$(platform_subdir_lookup lib/scratch-rt)"

  if [[ -e "$PLATFORM/refalrts-platform-POSIX.cpp" ]]; then
    POSIXCPP="$PLATFORM/refalrts-platform-POSIX.cpp"
  else
    POSIXCPP=lib/scratch-rt/platform-POSIX/refalrts-platform-POSIX.cpp
  fi

  echo ... compile $2
  FILELIST=$(ls $DIR/*.cpp)
  $CPPLINEE$TARGET \
    -Ilib/scratch-rt \
    -Ilib/scratch-rt/$DEBUGDIR \
    $FILELIST \
    "$PLATFORM/refalrts-platform-specific.cpp" \
    "$POSIXCPP" \
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

( cd lib-prefixes && ./make.sh ) || exit 1

for L in Hash Library GetOpt LibraryEx Platform; do
  bin/rlmake --scratch -X-OCdDPRS --makelib "lib/src/$L" \
    -o "lib/$L$(platform_lib_suffix)" || exit 1
done

rm -f $APPENDER
