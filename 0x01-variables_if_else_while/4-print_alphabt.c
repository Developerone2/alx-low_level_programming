#include <stdio.h>
/**
 * main - entry point
 * Description - print alphabets except q & e.
 * Return: return 0 (success)
*/
int main(void)
{
char az = 'a';

while (az <= 'z')
{
if (az != 'e' && az != 'q')
{
putchar(az);
}
az++;
}

putchar('\n');
return (0);
}

