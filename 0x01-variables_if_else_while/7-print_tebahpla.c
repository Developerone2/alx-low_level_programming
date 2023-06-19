#include <stdio.h>
/**
* main - entry point
* Description: Print alphabet backwards
*
* Return: return 0 (success)
*/
int main(void)
{
/*start at 'z' and print backwards*/
char az = 'z';

while (az >= 'a')
{
putchar(az);
az--;
}
putchar('\n');
return (0);
}
