#include<stdio.h>
int main()
{
	int x,y;
        printf("enter the first number:");
        scanf("%d",&x);
        printf("enter the second number:");
        scanf("%d",&y);
	while(x != y)
      	{		
		if(x > y)
		{
			x = x-y;
		}
		else
		{
			y = y-x;
      		}
	}
	printf("the GCD of two numbers are:%d",x);
	printf("\n");
	return 0;
}

