#include <stdio.h>

int main()
{
	int m, z;
	m=' ';
	printf("What Alphabet would you like to check out?\nTo exit press z\n");
	do
	{
	printf("Please input a character:");
	m=getchar();
	printf("The Number assigned to %c is %d\n",m ,m);
	}while (m!='z');
	printf("Thank you and Good day!\n");
	return 0;
}
