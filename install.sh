#!/bin/sh

mkdir /usr/local/include/nacl && cp $(dirname $0)/include/* /usr/local/include/nacl/ && cp $(dirname $0)/libnacl.a /usr/local/lib

