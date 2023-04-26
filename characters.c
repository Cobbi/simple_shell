#include "shell.h"

/**
 * finds_slash - checks if slash character exists.
 * @command: the first string
 * Return: 1 if exists, 0 if missing
 */
int finds_slash(char *command)
{
	int i = 0;

	while (command[i])
	{
		if (command[0] == '/')
		{
			printf("%c\n", command[0]);
			return (1);
		}

		i++;
	}
	return (0);
}

/**
 * exit_check - checks user inputs exit
 * @str1: the first string
 * @str2: the string exit
 * Return: 1 if exists, 0 if missing
 */
int exit_check(char *str1, char *str2)
{
	int j;

	for (j = 0; (*str1 != '\0' && *str2 != '\0') && *str1 == *str2; str1++)
	{
		if (j == 3)
			break;
		j++;
		str2++;
	}

	return (*str1 - *str2);
}

/**
 * env_check - checks user inputs env
 * @str1: the first string
 * @str2: the string exit
 * Return: 1 if exists, 0 if missing
 */
int env_check(char *str1, char *str2)
{
	int j;

	for (j = 0; (*str1 != '\0' && *str2 != '\0') && *str1 == *str2; str1++)
	{
		if (j == 2)
			break;
		j++;
		str2++;
	}

	return (*str1 - *str2);
}
/**
 * strput - checks input type
 * @arg: call prompt from another function (prompt)
 * Return: the string
 **/
char **strput(char *arg)
{
	char **buffer;
	char *div;
	int j = 0;
	char *delims = " \t\n";

	buffer = malloc(1024 * sizeof(char *));

	div = strtok(arg, delims);

	while (div != NULL)
	{
		buffer[j] = div;
		j++;
		div = strtok(NULL, delims);
	}
	carry_out(buffer);
	return (buffer);
}
/**
 * control_d - handles shell exit
 * @signal: signals shell to move
 **/
void  control_d(int signal)
{
	(void) signal;
	write(1, "\n$ ", 3);
}
