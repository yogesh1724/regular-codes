#include<stdio.h>
#include<string.h>
int main()
{
   char s[10],m[10];
   int i;
   printf("enter the string:");
   for(i=0;i<5;i++)
   {
   scanf("% c",&s);
   }
   printf("%c ",s);
   strcpy(m,s);
   printf("%c ",m);
   return 0;
}
