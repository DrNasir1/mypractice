#include <stdio.h>
int main()
{
	char ch;
	printf("Please input a character:\n");
	ch = getchar();
	printf("The character you typed was:");
	putchar(ch);
	printf("\n");
	return 0;
}
