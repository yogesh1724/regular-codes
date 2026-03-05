#include<stdio.h>
union employee
{
   char name[20];
   int empno;
   int bp;
};
int main()
{
   int i,n;
   float ts;
   union employee c[70];
   printf("enter no.emplyoee:");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
      printf("\n enter the name:");
      scanf("%s",c[i].name);
      printf("\n enter the no.:");
      scanf("%d",&c[i].empno);
      printf("\n enter the pay:");
      scanf("%d",&c[i].bp);
   }
   printf("employee details are..");
   for(i=0;i<n;i++)
   {
      ts=c[i].bp+0.5*c[i].bp+0.05*c[i].bp;
      printf("\n total\t %f",ts);
   }
}
