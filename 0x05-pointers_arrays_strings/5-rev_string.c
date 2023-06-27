#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: String input
 */
void rev_string(char *s)
{
int j;
char temp;

int len = strlen(s);

for (j = 0; j < len / 2; j++)
{
temp = s[j];
s[j] = s[len - j - 1];
s[len - j - 1] = temp;
}
}
