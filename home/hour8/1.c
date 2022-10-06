#include <stdio.h>
int main()
{
	int x, y;
	x= 0xEFF;
	y= 0x1000;
	printf("Given that x = 0xEFFF and y= 0x1000.\n");
	printf("The values in decimals are x=%d,y=%d.\n",x,y);
	printf("The values of ~x is %x and ~y is =%x.\n",~x,~y);
	printf("In decimals this mean x is %d,and y is %d.\n",~x,~y);
	printf("Using the d !x is %d and !y is %u.\n", !x,!y);
	printf("Using the u !x is %u and !y is %u.\n", !x,!y);
	return 0;
}
