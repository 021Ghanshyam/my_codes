#include<stdio.h>
int fun()
{
static int count = 0;   //static variable, initial value 0, 
                        //scope within block, life till the end of program 
count++;
return count;
}

int main()
{
printf("%d\n", fun());
printf("%d\n", fun());
return 0;
}

