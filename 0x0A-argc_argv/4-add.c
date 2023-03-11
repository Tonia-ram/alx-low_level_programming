#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * description: adds positive numbers
 * @argument_count: amount of arguments
 * @argument_values: the array of arguments
 * Return: 0
 */
int main(int argument_count, char *argument_values[])
{
	int i, j, sum;

	sum = 0;

	if (argument_count == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argument_count; i++)
	{
		for (j = 0; argument_values[i][j] != '\0'; j++)
		{
			if (!isdigit(argument_values[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argument_values[i]);
	}
	printf("%d\n", sum);
	return (0);
}
