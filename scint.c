#include<stdio.h>
#include<math.h>
int main()
{
   float principle,rate,time,s,a;
   printf("enter principle:");
   scanf("%f",&principle);
   printf("enter rate:");
   scanf("%f",&rate);
   printf("enter time:");
   scanf("%f",&time); 
   s=principle*time*rate/100;
   a=s+principle;
   printf("the simple interest:%f\n",s);
   printf("the amount:%f\n",a);
   return 0;
}
