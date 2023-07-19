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
char _strcpy(chardest, char *src);
char _strcat(chardest, char src);
int _strncmp(char s1, chars2, size_t n);
int _strcmp(char s1, chars2);
char _strdup(charstr);
int _strlen(char s);
