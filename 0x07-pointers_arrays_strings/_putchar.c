#include "main.h"
#include <unistd.h>
/**
 * _putchar - Writes the c character to the Standardout
 * @c: charater to print
 *
 * Return: 1 (success)
 * on error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
