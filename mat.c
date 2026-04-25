#include<stdio.h>
#include<string.h>
int main()
{
   char a[5][5];
   char b[30];
   int i,j;
   printf("enter the string:");
   for(i=0;i<30;i++)
   {
      scanf("%c",&a[i][j]);
      printf("%c",a[i][j]);
   }
   return 0;
}
