/**
  * print_name - function name
  * @name: name
  * @f: function that prints characters from the name
  * Return: void
  */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
