#ifndef MAIN_H
#define MAIN_H

/* header files */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

/* Buffers */

#define MAX_INPUT_SIZE 1024
#define MAX_ARGS_SIZE 64
#define MAX_ARGS_NUM 64

extern char **environ;
int _delim(char c, char *delim);
char **parse(char *str, char *x);
