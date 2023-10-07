#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: Name of file
 * @text_content: Content of File
 *
 * Return: 1 on success,
 *	-1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;
	size_t length, written;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	file = fopen(filename, "a"); /* "a" mode for appending */
	if (file == NULL)
		return (-1);

	length = strlen(text_content);
	written = fwrite(text_content, sizeof(char), length, file);

	fclose(file);

	if (written == length)
		return (1);
	else
		return (-1);
}
