#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the first number: ");
	scanf("%d",&a);
	printf("Enter the second number: ");
	scanf("%d",&b);
	if(a > b)
	{
		printf("The first number is biggest number:%d\n",a);
	}
	else
	{
		printf("The second number is biggest number:%d\n",b);

	}
}

