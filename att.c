#include<stdio.h>
#include<string.h>
pot(char *ktr)
{
   int i,j,k,n;
   n=strlen(ktr);
   for(i=0;i<n;i++)
   {
      for(j=n;j<0;j--)
      {
	 printf("%c",ktr);
      }
   }
}
int main()
{
   pot("program");
   return 0;
}
