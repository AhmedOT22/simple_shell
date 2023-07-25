#ifndef MAIN_H
#define MAIN_H

/* Header files */

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

/* Variables */

extern char **environ;

/* Main function */

int main(void);

/* Shell loop functions */

void read_input(char **input);
char **parse_args(char *input, char *delim);
void execute(char **args);
void is_exit(char **args, char *input);

/* Handling functions */

char *get_path(char *input);
char *get_env(char *var);
void free_args(char **args);
int _isdigit(int c);
int parse_int(const char *str);

/* Strings handling */

int _strlen(char *s);
int _strcmp(char *s1, char *s2);
int _strncmp(char *s1, char *s2, size_t size);
char *_strdup(char *str);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);

#endif
