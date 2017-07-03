#!/bin/bash

mkdir -p bin
source ./c-plus-plus.conf.sh
source ./bin/platform-specific.sh

APPENDER=rasl-appender/_rasl-appender$(platform_exe_suffix)
$CPPLINEE$APPENDER rasl-appender/rasl-appender.cpp || exit 1

make_dir() {
  DIR=$1
  TARGET=bin/$2$(platform_exe_suffix)

  $CPPLINEE$TARGET -Isrlib/scratch -DDONT_PRINT_STATISTICS \
    $DIR/*.cpp \
    $(platform_subdir_lookup srlib/scratch)/refalrts-platform-specific.cpp \

  if [ ! -e $TARGET ]; then
    echo "Can't create file $TARGET, aborting"
    exit 1
  fi

  $APPENDER $TARGET $DIR/*.rasl || exit 1
}

make_dir compiler srefc-core
make_dir lexgen lexgen
make_dir srmake srmake-core
make_dir srlib-rich-prefix srlib-rich-prefix
mv bin/srlib-rich-prefix$(platform_exe_suffix) srlib/rich/rich.exe-prefix
chmod -x srlib/rich/rich.exe-prefix

rm -f $APPENDER
