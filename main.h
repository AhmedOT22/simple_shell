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

#define tokbBufSize 128

extern char **environ;
char **parse(char *str);

