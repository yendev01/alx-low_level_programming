/**
  * int_index - function that searches for an integer
  * @array: array input
  * @size: size of array
  * @cmp: pointer to functions
  * Return: returns an integer
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && size && cmp)
	{
		int i;

		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
		return (-1);
	}
	return (-1);
}
