#include "main.h"

/**
 * _isdigit - checks a digit
 * @c: c is variable
 * Return: Always 0 (Success)
*/
int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
