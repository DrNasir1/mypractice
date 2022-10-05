#include <stdio.h>

/**
 * this program evaluates the sum of two integers
 */
int integer_add(int x, int y)
{
	int result;
	result = x+y;
	return result;
}
int main()
{
	int sum;
	sum = integer_add(5, 12);
	printf("The sum of the integers 5 and 12 are %d.\n" , sum);
	return (0);
}
