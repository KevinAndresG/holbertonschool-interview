#include <stdlib.h>
#include <stdio.h>
#include "palindrome.h"

/**
 * is_palindrome - checks if an integer is a palindrome.
 *
 * @n: the number to be checked
 * Return: an int
 */
int is_palindrome(unsigned long n)
{
	unsigned long r = 0, copy = n;

	while (copy != 0)
	{
		r *= 10;
		r += copy % 10;
		copy /= 10;
	}
	if (n == r)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
