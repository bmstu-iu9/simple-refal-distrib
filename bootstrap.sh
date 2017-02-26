#!/bin/bash

mkdir -p bin
source ./c-plus-plus.conf.sh
source ./bin/platform-specific.sh

APPENDER=rasl-appender/_rasl-appender$(platform_suffix)
$CPPLINE$APPENDER rasl-appender/rasl-appender.cpp

make_dir() {
  DIR=$1
  TARGET=bin/$2$(platform_suffix)

  $CPPLINE$TARGET -Isrlib -DDONT_PRINT_STATISTICS \
    $DIR/*.cpp $(platform_subdir_lookup srlib)/refalrts-platform-specific.cpp

  $APPENDER $TARGET $DIR/*.rasl
}

make_dir compiler srefc-core
make_dir lexgen lexgen
make_dir srmake srmake-core

rm -f $APPENDER
