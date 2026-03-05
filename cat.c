#include<stdio.h>
#include<math.h>
void sim(int p,float r,int t)
{
   int si;
   si=(p*r*t)/100;
   printf("simple interest: %d\n",si);
}
void com(int p,float r,int t)
{
 double ci=(p* pow(1+r/100,t))-p;
   printf("compound interest: %d\n",ci);
}
int main()
{
   int principle;
   int time;
   float rate;
   printf("enter the values:");
   scanf("%d",&principle);
   scanf("%f",&rate);
   scanf("%d",&time);
   sim(principle,rate,time);
   com(principle,rate,time);
   return 0;
}
