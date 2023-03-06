#include "main.h"
/**
 * set_string - sets the value of a pointer to a char
 *
 * @s: the pointer to change
 * @to: the value to change the pointer to
 *
 * Return: nothing
 */

void set_string(char **s, char *to)
{
	*s = to;
}
