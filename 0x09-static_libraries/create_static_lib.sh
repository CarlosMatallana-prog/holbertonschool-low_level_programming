#!/bin/bash
gcc -Werror -Wextra -pedantic -Wall *.c && ar rc liball.a *.o
