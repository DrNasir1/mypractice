#include <stdio.h>
int main()
{
	int a=1;
		while(a<20)
		{
			if(a%5==0&&a%3==0)
			{
				printf("FizzBuzz\n");
				a++;
			}
			else if(a%3==0)
			{
				printf("Fizz\n");
				a++;
			}
			else if(a%5==0)
			{
				printf("Buzz\n");
				a++;
			}
			else
			{
				printf("%d\n",a);
					a++;
			}
		}
}
