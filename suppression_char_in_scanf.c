#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the value of a ,b ,c :\n");
	scanf("%d%*d%d",&a,&b,&c);
	printf("the entered values of a, b, c are as:\n");
	printf("%d\n%d\n%d\n",a,b,c);
	return 0;
}
