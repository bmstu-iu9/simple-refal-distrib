#!/bin/bash

mkdir -p bin
source ./c-plus-plus.conf.sh

make_dir() {
  DIR=$1
  TARGET=$2

  $CPPLINE -Isrlib -obin/$TARGET $DIR/*.cpp
}

make_dir compiler srefc
make_dir lexgen lexgen
make_dir srmake srmake
