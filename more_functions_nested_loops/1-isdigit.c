#include "main.h"
/**
 * _isdigit - check if parameter is a digit or character
 *
 * @c: parameter
 * Return: 1 if its a number and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
