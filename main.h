#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include <limits.h>
#include <signal.h>

#define BUFSIZE 1024


/* String functions prototypes */

char *_strcpy(char *dest, char *src);
char *_strncpy(char *dest, char *src, int n);
char *_strdup(char *str);
int _strlen(char *str);

int _putchar(char c);
void _puts(char *str);
char *_strncat(char *dest, char *src, int n);

int _strcmp(char *str1, char *str2);
char **strtow(char *str);

#endif
