#!/bin/bash

if [ "$1" == "--debug" ]; then
  DEBUG=ON
else
  DEBUG=OFF
fi

chmod +x bootstrap.sh clear.sh bin/sr{efc,make}

source ./scripts/load-config.sh . || exit 1
source ./scripts/platform-specific.sh

APPENDER=rasl-appender/_rasl-appender$(platform_exe_suffix)
$CPPLINEE$APPENDER rasl-appender/rasl-appender.cpp $CPPLINEESUF || exit 1

make_dir() {
  DIR=$1
  TARGET=bin/$2$(platform_exe_suffix)

  echo ... compile $2
  if [ $DEBUG == ON ]; then
    FILELIST=$(ls $DIR/*.cpp)
  else
    FILELIST=$(
      ls $DIR/*.cpp | \
      grep -v refalrts-diagnostic-initializer | \
      grep -v refalrts-debugger \
    )
  fi

  $CPPLINEE$TARGET -Ilib/scratch-rt $FILELIST \
    $(platform_subdir_lookup lib/scratch-rt)/refalrts-platform-specific.cpp \
    lib/scratch-rt/platform-POSIX/refalrts-platform-POSIX.cpp \
    $CPPLINEESUF

  if [ ! -e $TARGET ]; then
    echo "Can't create file $TARGET, aborting"
    exit 1
  fi

  $APPENDER $TARGET $DIR/*.rasl || exit 1
}

make_dir compiler srefc-core
make_dir lexgen lexgen
make_dir srmake srmake-core
make_dir rsl-decompiler rsl-decompiler

( cd lib-prefixes && ./make.sh ) || exit 1

for L in Hash Library GetOpt LibraryEx Platform; do
  bin/srmake --scratch -X-OCdDPRS --makelib "lib/src/$L" \
    -o "bin/$L$(platform_lib_suffix)" || exit 1
done

rm -f $APPENDER
