#include <stdio.h>
#include <stdlib.h>

/**
 *main - adds positivve numbers
 *@argc: argument count
 *@argv: argument vector
 *Return: 1 or 0
 */

int main(int argc, char *argv)
{
	int i;
	int j = 0;
	unsigned int add = 0;

	for (i = 1; i < argc; i++)
	{
		while (*(*(argv + i) + j) != '\0')
		{
			if ((*(*(argv + i) + j) >= '0' && *(*(argv + i) + j) <= '9')
			|| *(*(argv + i) + j) == '-')
			{
				j++;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		j = 0;

		if (atoi(argv[i]) > 0)
			add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
