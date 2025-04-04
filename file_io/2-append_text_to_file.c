#include <unistd.h>
#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: The name of the file
 * @text_content: The NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w_status, len = 0;

	if (filename == NULL)
		return (-1);

	/* Open the file for writing with append flag (O_APPEND) */
	/* Do not create the file if it doesn't exist (no O_CREAT flag) */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	/* If text_content is NULL, don't add anything to the file */
	if (text_content != NULL)
	{
		/* Calculate the length of text_content */
		while (text_content[len])
			len++;

		/* Write the text to the file */
		w_status = write(fd, text_content, len);
		if (w_status == -1 || w_status != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
