#!/bin/bash
gcc -c -Werror -Wextra -pedantic -Wall *.c && ar rc liball.a *.c
