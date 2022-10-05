#include <stdio.h>

int main()

{
	int x, y;
	x=1;
	y=3;
	printf("The resuldt of x+=y is: %d\n" , x+=y);
	printf("The result of x+= -y is: %d\n", x+=y -y);
	printf("The result of x -= -y is: %d\n", x -= -y);
	printf("The result of x *= y is: %d\n", x *= y);
	printf("The result of x *= -y is: %d\n", x *= -y);
	return 0;
}
