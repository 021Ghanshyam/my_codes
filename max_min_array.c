#include<stdio.h>
int main()
{
	int arr[200],i,num,max,min;
	printf("Enter size of the array : ");
	scanf("%d",&num);
	printf("Enter elements in array :\n");
	for(i = 0; i < num; i++)
	{
		scanf("%d",&arr[i]);
	}
	max = min = arr[0];
	for(i = 1; i < num; i++)
	{ 
		if(min > arr[i])
		{
			min = arr[i];
		}
		if(max < arr[i])
		{
			max = arr[i];
		}
	}
	printf("minimum of array is : %d\n",min);
	printf("maximum of array is : %d\n",max);
	return 0;
}
