#include<stdio.h>
int main()
{
   int n,r,rev=0,original;
   printf("enter the value:");
   scanf("%d",&n);
   original=n;
   while(n>0)
   {
      r=n%10;
      rev=rev+r*r*r;
      n=n/10;
   }
   if(original==rev)
      printf("the given number is AMSTRONG %d");
   else
      printf("Not the AMSTRONG %d",rev);
   return 0;
}
