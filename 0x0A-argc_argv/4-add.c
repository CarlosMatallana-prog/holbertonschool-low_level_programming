#include "holberton.h"

/**
 * main - Add positive numbers
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 Success status or 1 Fail status
 */
int main(int argc, char *argv[])
{
	int numbers = argc - 1, digit = 0, iterator, result = 0, is_digit = 0;

	if (numbers >= 1)
	{
		for (iterator = 1; iterator <= numbers; iterator++)
		{
			digit = (atoi(argv[iterator]));
			is_digit = digit == 0 ? 0 : 1;
			if (is_digit == 1)
			{
				result += digit;
			}
			else
			{
				/* If is not a digit, print Error, new line, and return 1 */
				printf("Error\n");
				return (1);
			}

		}
		/* If it is a digit print the result, and return 0 */
		printf("%i\n", result);
		return (0);
	}
	else
	{
		/* If no number is passed to the program, print 0, followed by a new line */
		printf("0\n");
	}

	return (1);

}
