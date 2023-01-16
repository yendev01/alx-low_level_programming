#!/bin/bash
gcc -c -Wall -Werror -fPIC *.c
gcc *.o -shared -o liball.so
