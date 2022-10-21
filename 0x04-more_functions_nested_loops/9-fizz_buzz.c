#include <stdio.h>

/**
  * main - entry point
  * description: function to print fizz buzz
  * Return: 0
  */

int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if ((i % 3 == 0) && !(i % 5 == 0))
		{
			printf("Fizz ");
			/*fflush(stdout);*/
		}

		else if ((i % 5 == 0) && !(i % 3 == 0))
		{
			printf("Buzz ");
			/*fflush(stdout);*/
		}
		else if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}

	printf("Buzz\n");

	return (0);
}
