#include "function_pointers.h"
/**
 * print nmae - function prints out a name
 * @name: nmae given
 * @f: function of the name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)

		f(name);
}
