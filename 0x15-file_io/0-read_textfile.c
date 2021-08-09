#include "main.h"


/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file
 * @letters: is the number of letters it should read and print
 *
 * Return: the number of letters read or print || 0 if fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t len = 0;
	int file, print;
	char *str;

	str = malloc(sizeof(char) * letters);
	if (str == NULL || filename == NULL)
		return (0);

	file = open(filename, O_RDWR);
	if (file == -1)
		return (0);

	len = read(file, str, letters);
	if (len == -1)
		return (0);

	print = write(STDOUT_FILENO, str, len);
	if (print == -1)
		return (0);

	close(file);

	return (len);

}
