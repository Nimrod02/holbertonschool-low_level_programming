!#/bin/bash

gcc -c *c
ar -rsc liball.a .o
ranlib liball.a