#include <unistd.h>

void print(void)
{
	const char message[] = "Hello, Holberton\n";

	write(STDOUT_FILENO, message, sizeof(message) - 1);
}
int main(void)
{
	print();
	return (0);
}
