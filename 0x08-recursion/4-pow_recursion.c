/**
  * _pow_recursion - fucntion that evaluates the value of a num^another_num
  * @x: base input
  * @y: power
  * Return: returns the value of x^y
  */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
