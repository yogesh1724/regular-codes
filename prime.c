#include<stdio.h>
int factorial(int);
int main()
{
   int fact,n;
   printf("enter the value:");
   scanf("%d",&n);
   fact=factorial(n);
   printf("\n fractorial of %d is %d",n,fact);
}
int factorial(int n)
{
   int temp;
   if(n==0)
      return 1;
   else
      temp=n*factorial(n-1);
      return temp;
}
