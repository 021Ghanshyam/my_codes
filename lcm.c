#include<stdio.h>
int main()
{
	int x,y,i,lcm,gcd;
	printf("enter the first number:");
	scanf("%d",&x);
	printf("enter the second number:");
	scanf("%d",&y);
	for(i=1;i<=x && i<=y;++i)
       {
	if(x%i == 0 && y%i == 0)
	gcd = i;
       }
	lcm =(x * y)/ gcd;
	printf("the GCD of two numbers are:%d",gcd);
	printf("\n");
	printf("the LCM of two number are:%d",lcm);
	printf("\n");
	return 0;
}


