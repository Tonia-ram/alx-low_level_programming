#include <stdio.h>

/**
 * main - Entry point
 * Description: a program that prints its name, followed by a new line
 * @argument_count: amount of arguments
 * @argument_values: the array of arguments
 * Return: 0
 */
int main(int argument_count, char *argument_values[])
{
	int index;

	if (argument_values[0] != NULL)
	{
		for (index = 0; index < argument_count; index++)
		{
			printf("%s\n", argument_values[index]);
		}
	}
	return (0);
}
