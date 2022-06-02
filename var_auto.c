#include<stdio.h>
void main()
{
auto int x = 7;   //auto variable, storage in Stack,
                  //initial value garbage, scope within the block,
		  //life:end of block.
{
auto int x = 8;
printf("%d\n",x);
}
printf("%d\n",x);
}
