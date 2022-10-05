#include <stdio.h>
int main()
{
	char x;
	printf("This program converts your input number into hexadecimal number.\nTo exit enter 'x'.\n");
	do
	{
	x=getchar();
	printf("The hex form of %c is %x.\n",x,x);
	}
	while (x!='x');
	return 0;
}
