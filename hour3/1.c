#include <stdio.h>

int main(void)
{
	int ch;
	int cb;
	printf("please type two input character\n");
	ch=getc(stdin);
	cb=getc(stdin);
	printf("The characters you entered are: %c,%c\n", ch,cb);
	return (0);

}
