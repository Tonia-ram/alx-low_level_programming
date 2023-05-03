#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: a program that prints its name, followed by a new line
 * @argument_count: amount of arguments
 * @argument_values: the array of arguments
 * Return: 0
 */
int main(int argument_count, char *argument_values[])
{
	if (argument_count == 3)
	{
		printf("%d\n", atoi(argument_values[1]) * atoi(argument_values[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
