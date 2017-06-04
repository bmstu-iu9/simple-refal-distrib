#!/bin/bash

mkdir -p bin
source ./c-plus-plus.conf.sh
source ./bin/platform-specific.sh

APPENDER=rasl-appender/_rasl-appender$(platform_exe_suffix)
$CPPLINEE$APPENDER rasl-appender/rasl-appender.cpp || exit 1

make_dir() {
  DIR=$1
  TARGET=bin/$2$(platform_exe_suffix)

  $CPPLINEE$TARGET -Isrlib -DDONT_PRINT_STATISTICS \
    $DIR/*.cpp $(platform_subdir_lookup srlib)/refalrts-platform-specific.cpp \

  if [ ! -e $TARGET ]; then
    echo "Can't create file $TARGET, aborting"
    exit 1
  fi

  $APPENDER $TARGET $DIR/*.rasl || exit 1
}

make_dir compiler srefc-core
make_dir lexgen lexgen
make_dir srmake srmake-core

rm -f $APPENDER
