#include "main.h"
/**
 * _power_incursion: power
 * @x: int
 * @y: int
 *
 * Return: int
 */
int _power_incursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}
