#!/bin/bash

mkdir -p bin
source ./c-plus-plus.conf.sh

make_dir() {
  DIR=$1
  TARGET=$2

  ${CPPLINE}bin/$TARGET -Isrlib -DDONT_PRINT_STATISTICS $DIR/*.cpp
}

make_dir compiler srefc-core
make_dir lexgen lexgen
make_dir srmake srmake-core
