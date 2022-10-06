#include <stdio.h>

int main()
{
	printf("This program prints a triagle in form of '#'\n");
	int a, b, c, d, e, f, g;
	a='#';

		printf("%9c\n",a);
		printf("%8c%-8c\n",a , a);
		printf("%7c%c%c%-7c\n",a,a,a,a);
	return 0;
}
