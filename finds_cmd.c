#include "shell.h"

/**
 * finds_cmd - find command to be executed in the path. Maintains
 *
 * @command: the first count for the getline input.
 *
 * Return: Always string command in directory for process
 **/
char *finds_cmd(char *command)
{
	DIR *dir;
	struct dirent *start;
	char *env, checks, **sh = malloc(sizeof(char) * 1024);
	char **sep = malloc(sizeof(char) * 1024);

	while (*environ != NULL)
	{
		if (!(_strcmp(*environ, "PATH")))
		{
			*sh = *environ;
			for (int j = 0; j < 9; j++, sep++, sh++)
			{
				*sep = strtok(*sh, ":='PATH'");
				dir = opendir(*sep);
				if (dir == NULL)
					perror("Can't read directory");
				while ((start = readdir(dir)))
				{
					env = start->d_name;
					checks = _strcmp(env, command);
					if (checks == 0)
					{
						return (*sep);
					}
					if (env == NULL)
					{
						perror("Error");
					}
				}
			}
		}
		environ++;
	}
	return ("Error: File not found");
}
