#include<stdio.h>
int main()
{
	int n,num;
	printf("enter the number: ");
	scanf("%d",&n);
	num = ~n;
	printf("the number before flip: %d",n);
	printf("the number after flip: %d",num);
	return 0;
}

