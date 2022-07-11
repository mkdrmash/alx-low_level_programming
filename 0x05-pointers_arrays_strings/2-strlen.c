#include "main.h"

/**
  * _strlen - return the length of a string
  * @s: s is a parameter
  * @c: c is a variable
  *
  * Return: String length
  */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}
