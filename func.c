#include<stdio.h>
int main()
{
   int a,b,sum,sub,multi,divide;
   printf("enter the values of a and b:");
   scanf("%d%d",&a,&b);
   sum=a+b;
   sub=a-b;
   multi=a*b;
   divide=a/b;
   printf("the values of sum is %d\n",sum);
   printf("the value of sub is %d\n",sub);
   printf("the value of multi is %d\n",multi);
   printf("the value of divide is %d\n",divide);
   return 0;
}

