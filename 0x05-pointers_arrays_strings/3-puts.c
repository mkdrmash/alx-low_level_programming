#include "main.h"

/**
  * _puts - puts string by looping through the str variable
  * @str: str is a parameter
  *
  * Return: void
  */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}

	_putchar('\n');
}
