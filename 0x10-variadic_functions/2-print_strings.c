#include <stdarg.h>
#include <stdio.h>


/**
 * print_strings - Print all the string arguments
 *
 * @separator: the string separator
 * @n: constant with the arg counter
 *
 * Return: Void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list struc;
	unsigned int i;
	char *string;

	va_start(struc, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(struc, char *);
		if (string)
			printf("%s", string);
		else
			printf("(nil)");
		if (separator && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(struc);

}
