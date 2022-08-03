#include "function_pointers.h"
/**
 * print_name - pass the name argument to the callback func
 * @name: name of the person
 * @f: this is a callback function
 *
 * Return: Nothing.
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	else
	{
		(*f)(name);
	}
}
