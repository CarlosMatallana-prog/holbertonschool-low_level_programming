#include "main.h"
#include <string.h>


/**
 * main - copies the content of a file to another file.
 * @argc: the name of the file
 * @argv : the text to append at the end of the file
 *
 * Return: 1 on success || -1 on failure
 */
int main(int argc, char *argv[])
{
	int file_to, file_from, wr, rd = 1, close1, close2;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(err, "Usage: cp file_from file_to\n"), exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(err, "Error: Can't read from file %s\n", argv[1]), exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (file_to == -1)
	{
		dprintf(err, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	while (rd > 0)
	{
		rd = read(file_from, buffer, 1024);
		if (rd == -1)
		{
			dprintf(err, "Error: Can't read from file %s\n", argv[1]), exit(98);
		}

		wr = write(file_to, buffer, rd);
		if (wr == -1)
		{
			dprintf(err, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	close1 = close(file_from);
	if (close1 == -1)
		dprintf(err, "Error: Can't close fd %d\n", file_from), exit(100);
	close2 = close(file_to);
	if (close2 == -1)
		dprintf(err, "Error: Can't close fd %d\n", file_to), exit(100);

	return (0);
}
