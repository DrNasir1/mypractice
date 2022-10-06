#include <stdio.h>

int integer_multiply( int x, int y)

{
	int result;
	result = (x * y);
	return result;
}

int main(void)
{
	int multiply;

	multiply = integer_multiply(37, 26);
	
	printf("The result of the multiplication of 37 and 26 are %d.\n" , multiply);
	
	return 0;
}
