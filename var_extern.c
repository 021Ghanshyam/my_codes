#include<stdio.h>
int x;
void main()
{
extern int x;      //extern variable, storage in Data segment,
                   //initial value 0, scope global multiple files,
		   //life Till the end of program.
printf("%d\n",x);
x = 3;
printf("%d\n",x);
}
