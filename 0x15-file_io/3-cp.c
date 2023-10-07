#include "main.h"
#include <stdio.h>

#define BUFFER_SIZE 1024

/**
 * error_exit - Exit error
 * @code: Code
 * @message: Message
 *
 * Return: void
 */
void error_exit(int code, const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(code);
}

/**
 * main - Copies the content of a file to another file.
 * @argc: Argument count
 * @argv: Argument variable
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fd_source, fd_dest;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;
	const char *file_from = argv[1];
	const char *file_to = argv[2];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to");

	fd_source = open(file_from, O_RDONLY);
	if (fd_source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	fd_dest = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_dest == -1)
	{
		dprintf(STDERR_FILENO, "Can't write to file %s\n", file_to);
		exit(99);
	}


	while ((bytes_read = read(fd_source, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_dest, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error:  Can't write to file %s\n", file_to);
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error reading from file %s\n", file_from);
		exit(98);
	}

	if (close(fd_source) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_source);
		exit(100);
	}
	if (close(fd_dest) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_dest);
		exit(100);
	}

	return (0);
}
