#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[1000], r[1000];

	int begin, end;
	int count;

	count = 0;

	printf("Input a string\n");
	fgets(s);

	while (s[count] != '\0')
		count++;
	for (begin = 0; begin < count; begin++)
	{
		r[begin] = s[end];
		end--;
	}
	r[begin] = '\0';
	printf("%s\n", r);

	return (0);
	

}
