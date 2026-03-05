#include<stdio.h>
int main()
{
   int a=10,b;
   printf("a=%d\n",a);
   a++;
   printf("a=%d\n",a);
   ++a;
   printf("a=%d\n",a);
   b=a++;
   printf("a=%d\n,b=%d\n",a,b);
   a--;
   printf("a=%d\n",a);
   --a;
   printf("a=%d\n",a);
   b=a--;
   printf("a=%d\n,b=%d\n",a,b);
   b=--a;
   printf("a=%d\n,b=%d\n",a,b);
   return 0;
}
