#include<stdio.h>
#include<string.h>
int revs(char*);
int main()
{
   char l[200];
   int j;
   printf("enter the string:");
   for(j=0;l[j]!=0;j++)
   {
      scanf("%s",&l[j]);
   }
   revs(l);
   return 0;
}
int revs(char l)
{
   int i=0,n;
   n=strlen(l);
   for(i=n;i<n-1;i--)
   {
      printf("%s",l[i]);
   }
}

