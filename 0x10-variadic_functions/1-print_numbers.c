#include <stdarg.h>
#include <stdio.h>


/**
 * print_numbers - Print all the number arguments
 *
 * @separator: the number separator string
 * @n: constant with the arg
 *
 * Return: Void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list struc;
	unsigned int i;
	char *new_separator;

	if (separator == NULL)
		new_separator = "";
	else
		new_separator = separator;

	va_start(struc, n);
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(struc, int));
			if (i < (n - 1))
			{
				printf("%s", new_separator);
			}
		}
		printf("\n");
	}
	va_end(struc);
}
