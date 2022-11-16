#include <stdio.h>

/**
  * main - entry point
  * description: prints out the file from which it was compiled
  * Return: 0 if successful
  */

int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
