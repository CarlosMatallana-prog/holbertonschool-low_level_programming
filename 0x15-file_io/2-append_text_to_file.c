#include "main.h"
#include <string.h>


/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content : the text to append at the end of the file
 *
 * Return: 1 on success || -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, print;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		print = write(file, text_content, strlen(text_content));
		if (print == -1)
		{
			close(file);
			return (-1);
		}
	}

	close(file);
	return (1);

}
