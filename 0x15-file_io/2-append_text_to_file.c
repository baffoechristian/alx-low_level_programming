#include "main.h"

/**
 * append_text_to_file - text that is added at the conclusion of a file.
 * @filename: A reference to the files name.
 * @text_content: The final string to include in the file.
 *
 * Return: If the function is unsuccesful or filename is NULL - -1.
 *         If the file is not available the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
