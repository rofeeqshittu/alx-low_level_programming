#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: File Name
 * @letters: Number of letters it should read and print
 *
 * Return: Actual no of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char *buffer;
	ssize_t bytesRead, bytesWritten;

	if (filename == NULL)
		return (0);

	fp = fopen("filename", "r");
	if (fp == NULL)
		return (0);

	buffer = (char *)malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		fclose(fp);
		return (0);
	}

	bytesRead = fread(buffer, sizeof(char), letters, fp);
	if (bytesRead < 0)
	{
		fclose(fp);
		free(buffer);
		return (0);
	}

	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	if (bytesWritten != bytesRead)
	{
		fclose(fp);
		free(buffer);
		return (0);
	}

	fclose(fp);
	free(buffer);

	return (bytesRead);
}
