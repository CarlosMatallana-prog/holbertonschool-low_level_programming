#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -L. *.c -ldynamic -o len
