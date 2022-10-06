#include <stdio.h>

int main()
{
	char n, K;
		n=' ';
		printf("Please enter a single character:\n(Enter K to exit loop)\n");
	while (n!='K')
	{
		n=getchar();
		putchar(n);
	}
		printf("\nSuccessfully exited the loop. Bye!\n");
		return 0;
}
