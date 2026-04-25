#include<stdio.h>
int fibo(int);
int main()
{
   int n,z;
   printf("enter the range:");
   scanf("%d",&n);
   z=fibo(n);
   return 0;
}
int fibo(int n)
{
   int i,x=0,y=1,c;
   printf("the series: %d\t %d\t",x,y);
   for(i=2;i<n;i++)
   {
      c=x+y;
      printf("%d\t",c);
      x=y;
      y=c;
   }
}


