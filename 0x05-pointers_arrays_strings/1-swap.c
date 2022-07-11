#include "main.h"

/**
  * swap_int - swap values
  *
  * @a: a is a variable
  * @b: b is a variable
  *
  * Return: void
  */
void swap_int(int *a, int *b)
{
	int aSwap;
	int bSwap;

	aSwap = *a;
	bSwap = *b;

	*a = bSwap;
	*b = aSwap;
}
