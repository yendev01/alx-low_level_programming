#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
  * main - program that adds positive numbers
  * @argc: count
  * @argv: string array input
  * Return: 0 or 1
  */

int main(int argc, char *argv[])
{
	int sum = 0, i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		unsigned int n = 0;

		while (n < strlen(argv[i]))
		{
			if (isdigit(argv[i][n]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			n++;
		}

		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
