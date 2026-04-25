#include<stdio.h>
int main()
{
   int kay[5]={6,8,9,10,5};
   int *u=kay;
   for(int i=0;i<5;i++)
   {
     printf("%d\n",*(u+i));
   }
   return 0;
}
