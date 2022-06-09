#include<stdio.h>
int main()
{
	int x,y,z,biggest;
	printf("Enter the first number : ");
	scanf("%d",&x);
	printf("Enter the second number : ");
	scanf("%d",&y);
	printf("Enter the third number : ");
	scanf("%d",&z);
	if(x > y)
	{
		if(x > z)
		{
		printf("The first number is the biggest number:%d\n",x);
		}
	       	else
		{
		printf("The third number is the biggest number :%d\n",z);
		}
	}
			else
			{
				if(y > z)
				{
					printf("The second number is the biggest number :%d\n",y);
				}
				else
				{
					printf("The third number is the biggest number :%d\n",z);
				}
			}
}
			
