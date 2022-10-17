#include "main.h"

/**
 * _write - a function that prints characters to stdout
 * Return: returns the number of bytes printed (on success)
 *         returns -1 (on error)
 */
int _write(char c)
{
	return(write(1, &c, 1));
}
