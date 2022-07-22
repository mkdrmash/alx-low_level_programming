#include <unistd.h>
/**
 * _atoi - converts a string to integer
 * @s: The string to convert
 *
 * Return: On success res.
*/

int _atoi(char *s)
{
	int res = 0;
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{
		res = res * 10 + s[i] - '0';
	}

	return (res);
}
