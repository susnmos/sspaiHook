#!/bin/bash

cd `dirname $0`
make clean
rm ./packages/*.deb
make package install debug=0
exit 0