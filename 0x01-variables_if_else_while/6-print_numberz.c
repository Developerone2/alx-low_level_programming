#include <stdio.h>
/**
 * main - entry point
 * Description: print single digits
 *              using int.
 * Return: return 0 (success)
 */
int main(void)
{
int digit = 0;

while (digit <= 9)
{
/*change i into ASCII*/
putchar(digit + '0');
digit++;
}
putchar('\n');
return (0);
}
