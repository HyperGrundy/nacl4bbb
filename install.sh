#!/bin/sh

mkdir /usr/include/nacl && cp $(dirname $0)/include/* /usr/include/nacl/ && cp $(dirname $0)/libnacl.a /usr/lib

