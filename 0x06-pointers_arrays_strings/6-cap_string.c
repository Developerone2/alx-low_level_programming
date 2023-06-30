#include "main.h"

/**
 * *cap_string - function that capitalizes all words of a string
 * @str: string input
 * Return: string with words capitalized
 */
char *cap_string(char *str)
{
int inx = 0;
while (str[inx])
{
while (!(str[inx] >= 'a' && str[inx] <= 'z'))
inx++;
if (str[inx - 1] == ' '
str[inx - 1] == '\t' ||
str[inx - 1] == '\n' ||
str[inx - 1] == ',' ||
str[inx - 1] == '.' ||
str[inx - 1] == ';' ||
str[inx - 1] == '!' ||
str[inx - 1] == '?' ||
str[inx - 1] == '"' ||
str[inx - 1] == '(' ||
str[inx - 1] == ')' ||
str[inx - 1] == '{' ||
str[inx - 1] == '}' ||
inx == 0)
str[inx] -= 32;
inx++;
}
return (str);
}
