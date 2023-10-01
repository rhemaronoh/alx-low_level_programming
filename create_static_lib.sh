#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
arr -rc liballa.a *.o
ranlib liball.a
