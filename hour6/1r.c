#include <stdio.h>

int main()

{
	int x, y, z, a, b, c, d;
	x=1;
	y=3;
	a=(x+=y);
	b=(x+=y-y);
	c=(x -=-y);
	z=(x *=y);
	d=( x *=-y);
{
	printf("The resuldt of x+=y is: %d\n" , a);
}
{	
	printf("The result of x+= -y is: %d\n", b);
}
{
	printf("The result of x -= -y is: %d\n", c);
}
{
	printf("The result of x *= y is: %d\n", z);
}
{
	printf("The result of x *= -y is: %d\n", d);
}
	return 0;
}
