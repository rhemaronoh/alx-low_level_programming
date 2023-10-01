#!/bin/bash
gcc _wall -pedantic -Werror -Wextra -c *.c
arr -rc liballa.a *.o
ranlib liball.a
