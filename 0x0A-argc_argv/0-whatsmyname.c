#include <stdio.h>

int main(int argument_count,char *argument_values[])
{ 
	if (argument_count >= 1)
		printf("%s\n",argument_values[0]);
	return (0);
}
