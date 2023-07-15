#ifndef MAIN_H
#define MAIN_H

/* header files */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>
#include <sys/types>
#include <sys/wait.h>
#include <sys/stat.h>

/* Shell loop functions */

void read_input(char **input);
char **parse_args(char *input, char *delim);
void execute(char **args);

/* */
