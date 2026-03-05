#include<stdio.h>
void complex(int,int,int,int);
void main()
{
   int x1,x2,y1,y2;
   printf("enter the real and img values c1:");
   scanf("%d%d",&x1,&y1);
   printf("enter the real and img values c2:");
   scanf("%d%d",&x2,&y2);
   complex(x1,x2,y1,y2);
}
void complex(int a,int b,int c,int d)
{
   int e,f;
   e=a+b;
   f=c+d;
   printf("the addition of two complex is %d+i%d",e,f);
}
