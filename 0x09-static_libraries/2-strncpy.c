#include "main.h"

/**
* _strncpy - a function that copies a string
* @dest: pointer to destination input buffer
* @src: pointer to source input buffer
* @n: bytes of @src
* Return: @dest
*/

char *_strncpy(char *dest, char *src, int n)
{

int k;
k = 0;
while (k < n && src[k] != '\0')
{
dest[k] = src[k];
k++;
}
while (k < n)
{
dest[k] = '\0';
k++;
}
return (dest);
}
