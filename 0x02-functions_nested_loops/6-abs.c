#include <stdlib.h>
#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer
 * @r: takes in integer type input for function
 * Return: Always 0 (success)
 */
int _abs(int r)
{
	if (r < 0)
		r = (-1) * r;
	return (r);
}
