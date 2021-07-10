#!/bin/bash
gcc -c -Werror -Wextra -pedantic -Wall && ar rc liball.a *.o
