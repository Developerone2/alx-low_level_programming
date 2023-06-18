#include <stdio.h>
/**
 * main - entry point
 * Description: print alphabet letter
 * in lower and upper case
 * Return: return 0 (success)
*/
int main(void)
{
char az = 'a';
char AZ = 'A';
/*print lowercase alphabets*/
while (az <= 'z')
{
putchar(az);
az++;
}
/*print uppercase alphabets*/
while (AZ <= 'Z')
{
putchar(AZ);
AZ++;
}
/*print a new line after printing the alphabets*/
putchar('\n');
return (0);
}

