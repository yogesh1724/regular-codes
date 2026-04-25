#include<stdio.h>
int main()
{
   int i,j;
   for(i=0;i<6;i++)
   {
      for(j=i-1;j<6;j++)
      {
	 printf("#\t");
      }
      printf("\n");
   }
   return 0;
}

