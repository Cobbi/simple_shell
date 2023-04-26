#ifndef _SHELL_H_
#define _SHELL_H_


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <dirent.h>
#include <ctype.h>
#include <limits.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>

/* for command prompt */
extern char **environ;

/* for command prompt */
void cmd_prompt(void);

/* for string concatenate */
char *_strcat(char *end, char *src);

/* for prints input */
char *prints_input(void);

/* for string length */
int _strlen(char *s);

/* puts a character */
void hold(char *h);

/* finds cmd */
char *cmd_finder(char *cmd);

/* finds a file */
char *file_finder(char *cmd);

/* compares two strings */
int compare(char *str1, char *str2);

/* finds string if compared */
int _strcmp(char *str1, char *str2);

/* concatenate strings*/
char *concat_str(char *str1, char *str2);

/* writes a character as putchar */
int _putchar(char ch);

/* finds slash */
int finds_slash(char *command);

/* checks user exit*/
int exit_check(char *str1, char *str2);

/* checks env */
int env_check(char *str1, char *str2);

/* accepts inputs */
char *strput(char *arg);

/* handles signal */
void control_d(int signal);

/* executes command in shell */
void carry_out(char **command);

#endif
