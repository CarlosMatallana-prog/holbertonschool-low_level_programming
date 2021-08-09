#include "main.h"


/**
 * create_file - creates a file
 * @filename: the name of the file
 * @text_content : is a NULL terminated string to write to the file
 *
 * Return: 1 on success || -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t len = 0;
	int file, print;

	if (text_content == NULL || filename == NULL)
		return (-1);

	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	while (text_content[len])
	{
		len++;
	}

	print = write(file, text_content, len);
	if (print == -1)
		return (-1);

	close(file);
	return (1);

}
