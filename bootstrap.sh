#!/bin/bash

mkdir -p bin
source ./c-plus-plus.conf.sh
source ./bin/platform-specific.sh

make_dir() {
  DIR=$1
  TARGET=$2

  ${CPPLINE}bin/$TARGET$(platform_suffix) -Isrlib -DDONT_PRINT_STATISTICS \
    $DIR/*.cpp $(platform_subdir_lookup srlib)/refalrts-platform-specific.cpp
}

make_dir compiler srefc-core
make_dir lexgen lexgen
make_dir srmake srmake-core
