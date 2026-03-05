#include<stdio.h>
int main()
{
   int i;
   printf("enter the number:");
   scanf("%d",&i);
   if(i%2==0)
      printf("the given value is even",i);
   else
      printf("the given number is odd",i);
   return 0;

}
