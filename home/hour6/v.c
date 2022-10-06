#include <stdio.h>

int main()
{
	int z, x, y;
	x=2;
	y=14;
	z=(x+= -y);
	printf("Given that x is 2 and y is 14,\n");
	printf("Ther result of x+=x -y is: %d\n" , z);
	return 0;
}
