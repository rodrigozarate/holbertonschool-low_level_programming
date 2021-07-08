#!/bin/bash
gcc -Wall -c *.c
ar -qcv liball.a *.o
