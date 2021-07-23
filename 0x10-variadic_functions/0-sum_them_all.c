#include <stdarg.h>
#include <stdio.h>


/**
 * sum_them_all - sum of all its parameters.
 * @n: constant with the arg
 *
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list struc;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(struc, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(struc, int);
	}

	va_end(struc);

	return (sum);

}
