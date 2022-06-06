#include<stdio.h>
int main()
{
	char str1[]="hello innominds";
        char str2[100],i;
	printf("string first str1 :%s\n",str1);
	for(i=0;str1[i] != '\0'; ++i)
		{
			str2[i] = str1[i];
        	}
	str2[i] ='\0';
	printf("string second str2 :%s\n",str2);
	return 0;
}
