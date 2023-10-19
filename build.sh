#!/bin/bash
BinName="temperature-converter"
mkdir -p bin
gcc -Wall -Wextra -pedantic *.c -o bin/$BinName
