#include <stdio.h>
/**
* main - Entry point
* Description:A program that prints all
* combinations of 2 two digts
* Return: return 0 (success)
*/
int main(void)
{
int firstnum = 0, secondnum;

while (firstnum <= 99)
{
secondnum = firstnum;
while (secondnum <= 99)
{
if (secondnum != firstnum)
{
putchar((firstnum / 10) + 48);
putchar((firstnum % 10) + 48);
putchar(' ');
putchar((secondnum / 10) + 48);
putchar((secondnum % 10) + 48);

if (firstnum != 98 || secondnum != 99)
{
putchar(',');
putchar(' ');
}
}
secondnum++;
}
firstnum++;
}
putchar('\n');

return (0);
}
