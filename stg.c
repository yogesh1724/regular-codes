#include<stdio.h>
#include<string.h>
int main()
{
   char c[200],b[100];
   int count=0,i;
   printf("enter the string:");
   scanf("%s",&c);
   printf("%s",c);
   int k=strlen(c);
   printf("\n%d",k);
   printf("\nenter the second string:");
   scanf("%s",&b);
   printf("%s",b);
   i......nt l=strlen(b);
   printf("\n%d",l);
   strcat(c,b);
   printf("\n%s",c);
   int g=strlen(c);
   printf("\n%d",g);
   for(i=0;i<g;i++)
   {
      char  r=c[i];
      if(r=='a'||r=='e'||r=='i'||r=='o'||r=='u'||r=='A'||r=='E'||r=='I'||r=='O'||r=='U')
      {
	 count+=1;
      }
   }
   printf("\nthe no of vowels:%d",count);
   return 0;
}
