#include <stdio.h>
int main()
{
	char x;
	printf("This program keeps taking input from the user\nAnd prints them out until q is entered\n");
	for (x=' '; x!='q'?1:0;)
	{
		x=getchar();
		putchar(x);
	}
	printf("\nCongtulations you exited the loop! Bye!.\n");
	return 0;
}
