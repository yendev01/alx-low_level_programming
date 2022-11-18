#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * main - entry point
  * @argc: ...
  * @argv: ...
  * Return: int
  */

int main(__attribute__((unused)) int argc, char *argv[])
{
	int (*get_op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	get_op = get_op_func(argv[2]);

	if (!get_op)
	{
		printf("Error\n");
		exit(98);
	}

	printf("%d\n", (*get_op)(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
