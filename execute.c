#include "shell.h"
/**
 * carry_out - executes the command in shell
 * @command sets 402 as pointer an integer
 *
 * Return: Always integer
 */
void carry_out(char **command)
{
    char *ch;
    char *arg = (*(command + 1));
    char *fs = "/";
    char *fc;
    char *pvar = *command;
    char *argv[4];
    if ((access(command[0], F_OK) == 0))
    {
        argv[0] = command[0];
        argv[1] = arg;
        argv[2] = ".";
        argv[3] = NULL;
        if (execve(argv[0], argv, NULL) == -1)
        {
            perror("Error");
        }
    }
    else
    {
        fc = cmd_finder(pvar);
        fs = concat_str(fc, fs);
        ch = concat_str(fs, *command);
        argv[0] = ch;
        argv[1] = arg;
        argv[2] = ".";
        argv[3] = NULL;
        if (execve(argv[0], argv, NULL) == -1)
        {
            perror("Error");
        }
    }
}
