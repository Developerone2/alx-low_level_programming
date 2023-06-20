#include <stdio.h>
/**
* main - entry point
* Description: print all combinaton of 2 digits.
* Return: return 0 (success)
*/
int main(void)
{
int dig1 = 0, dig2;

while (dig1 <= 9)
{
dig2 = 0;
while (dig2 <= 9)
{
if (dig1 != dig2 && dig1 < dig2)
{
putchar(dig1 + 48);
putchar(dig2 + 48);

if (dig1 + dig2 != 17)
{
putchar(',');
putchar(' ');
}
}
dig2++;
}
dig1++;

}
putchar('\n');

return (0);
}
