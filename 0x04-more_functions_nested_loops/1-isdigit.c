#include "main.h"

/**
 * checks for checks for a digit (0 through 9)
 * Return: Always 0.i
 */
int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
