
#include<math.h>
#include<stdio.h>

int main(void)
{
   float number, root;
   printf("Enter a number: \n");
   scanf("%f",&number);
   root = sqrt(number);
   
   printf("Square root of %f = %f\n", number,root);
   return 0;
}
