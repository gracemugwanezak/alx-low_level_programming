#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: a string
 * Return: length of a string
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length = length + _strlen_recursion(s + 1);
	}
	return (length);
}
