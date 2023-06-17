#include <unistd.h>
/**
 * main - Entry point, print a quote
 * return: 1 (not success)
 */
int main(void)
{
char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-18-19\n";

	write(1, quote, 59);
	return (1);
}
