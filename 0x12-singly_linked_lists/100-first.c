#include <unistd.h>

/**
 * print_message - Function that print some message before main function
 *
 * Return: void
 */
void __attribute__((constructor)) print_message(void)
{
	const char message[] = "You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n";
	write(STDOUT_FILENO, message, sizeof(message) - 1);
}
