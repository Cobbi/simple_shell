#include "shell.h"
/**
 * main - main entry point loop
 * @argc: the argc parameter
 * @argv: the argv vector
 * Return: cmd_prompt() if success
 **/
int main(int argc, char **argv)
{
    (void)argv;
    (void)argc;
    signal(SIGINT, control_d);
    cmd_prompt();
    return (0);
}
13:59
strings.c
=============================
#include "shell.h"
/**
 * _strcmp - find dir, compares two strings
 *
 * @str1: the first string.
 * @str2: the next string.
 *
 * Return: for match, else for other number.
 **/
int _strcmp(char *str1, char *str2)
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
 * _putchar - puts character as putchar
 * @c: prints a character
 * Return: 1 if success.
 * -1 if error, sets errno
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}
/**
 * hold - works like c puts
 * @h: sets 402 as integer
 *
 * Return: int
 */
void hold(char *h)
{
    while (*h != '\0')
    {
        _putchar(*h);
        h++;
    }
}
/**
 * _strlen - the string length
 * @s: the string.
 * Return: the length.
 */
int _strlen(char *s)
{
    int j;
    for (j = 0; s[j] != '\0'; j++)
    {
        ;
    }
    return (j);
}
/**
 * concat_str - concatenates two strings
 * @str1: the first string.
 * @str2: the next string.
 * Return: the string.
 */
char *concat_str(char *str1, char *str2)
{
    char *c;
    int strlen1, strlen2, a, b, r;
    if (str1 == NULL)
        str1 = "";
    if (str2 == NULL)
        str2 = "";
    strlen1 = _strlen(str1);
    strlen2 = _strlen(str2);
    c = malloc(((strlen1) + (strlen2) + 1) * sizeof(char));
    if (c == NULL)
    {
        return (NULL);
    }
    for (a = 0; a < strlen1; a++)
    {
        c[a] = str1[a];
    }
    for (b = strlen1, r = 0; r <= strlen2; b++, r++)
    {
        c[b] = str2[r];
    }
    return (c);
}
