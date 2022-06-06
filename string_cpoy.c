#include<stdio.h>
#include<string.h>
int main()
{
	char source[] = "my name is not present";
	char destination[100];
	strcpy(destination, source);
	printf("source string :%s\n",source);
	printf("destination string :%s\n",destination);
	return 0;
}
