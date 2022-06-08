#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
int main()
{
	char str[200],ch;
	int i,count=0;
	printf("Enter the string:");
	scanf("%s",&str);
	__fpurge(stdin);
	printf("enter the character to find it's frequecy:");
        scanf("%c",&ch);
	for(i=0;str[i] !='\0';i++)
	{
		if(ch == str[i])
			count++;
	}
	printf("Frequency of %c is %d\n",ch,count);
	printf("%c occurs %d times in %s\n",ch,count,str);
	return 0;
}

	
