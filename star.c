#include<stdio.h>
int main()
{
   int x,y,*a,*b,temp;
   a=&x;
   b=&y;
   printf("enter the value:");
   scanf("%d%d",&x,&y);
   printf("Before swapping x=%d and y=%d",x,y);
   temp=*b;
   *b=*a;
   *a=temp;
   printf("\nAfter swapping x=%d and y=%d",x,y);
   return 0;
}


