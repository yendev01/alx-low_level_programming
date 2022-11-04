#include <stdio.h>
#include <stdlib.h>
/**
  * main - entry point
  * @argc: count
  * @argv: 1-D vector input
  * Return: product of arguments and 1 if erroneous
  */

int main(int argc, char *argv[])
{
	int product;

	if (argc - 1 == 2)
	{
		product = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", product);

		return (0);
	}

	printf("Error\n");

	return (1);
}
