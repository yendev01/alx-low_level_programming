#include <stdio.h>
/*#define UNUSED(x) (void)(x)*/

/**
  * main - entry point
  * @argc: count
  * @argv: vector array of strings
  * Return: 0
  */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
