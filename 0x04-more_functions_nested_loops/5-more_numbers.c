#include "main.h"

/**
 * more_numbers - print 0 - 14 ,10 times
 * Return: 0 (success)
 */
void more_numbers(void)
{
int line, count, num;

for (line = 0; line < 10; line++)
{
for (count = 0; count < 15; count++)
{
num = count;

if (count > 9)
{
_putchar(1 + 48);
num = count % 10;
}
_putchar(num + 48);
}
_putchar('\n');
}
}
