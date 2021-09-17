#include <stdio.h>
#include <stdlib.h>

/**
 *main - multiplies numbers
 *@argc: argument count
 *@argv: argument vector
 *Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int i;
	int mul = 1;

	if (argc == 3)
	{
		for (i = 1; 1 < argc; i++)
		{
                        mul *= atoi(argv[i]);
		}

		printf("%d\n", mul);
		return (0);
	}
	printf("Error\n");
	return (1);
}
