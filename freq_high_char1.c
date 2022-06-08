#include<stdio.h>
#include<string.h>
void count (char*str);
int main()
{
	char str[500];
	printf("Enter the string:");
        scanf("%s",&str);
	count(str);
	return 0;
}
void count(char*str1)
{
	char str[500],ch;
	int i,j,num,count;
	strcpy(str,str1);
	num = strlen(str);
	for(i = 0; i < num; i++)
	{
		if(str[i] != 0)
		{
			ch = str[i];
			count = 0;
			for(j = 0; j < num; j++)
			if(str[j] == ch)
			{
				count++;
				str[j] = 0;
			}
			printf("%c occurs %d times \n",ch,count);
		}
	}
}
