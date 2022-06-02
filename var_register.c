#include<stdio.h>
void main()
{
register char a = 'F';  //register variable, storage in CPU register,
                        //initial value garbage, scope within the block,
		        //life:end of block.
printf("%d\n",a);
}
