#include "main.h"
/**
 * check - checks for the sqr root
 * @a: int
 * @b: int
 *
 * Return : int
 */
int check(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (check(a + 1, b));
}
/**
 * _sqrt_recursion: rtrns the natural squrt of a num
 * @n: int to find squrt of
 * Rtrn: ntrl squrt or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
