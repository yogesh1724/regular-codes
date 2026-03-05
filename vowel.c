#include<stdio.h>
int main()
{
   int a=10,b=20,c;
   c=b*a--;
   printf("a=%d,b=%d,c=%d",a,b,c);
   return 0;
}
