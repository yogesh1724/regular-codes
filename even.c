#include<stdio.h>
#include<string.h>
int main()
{
   int l,choice;
   char a[50],b[50];
   printf("enter the string:");
   scanf("%s",&a);
   printf("enter the chioce..");
   scanf("%d",&choice);
   switch(choice)
   {
      case 1:
	 l=strlen(a);
	 printf("the length of string is %d",l);
	 break;
      case 2:
	 strcpy(b,a);
	 printf("Original string is %s",a);
	 printf("Copied string is %s",b);
	 break;
      case 3:
	 printf("enter the string 2:");
	 scanf("%s",b);
	 strcat(a,b);
	 printf("Concatnated string is %s",a);
	 break;
      case 4:
	 printf("enterthe string:");
	 scanf("%s",b);
	 if(strcmp(a,b)==0)
	    printf("string are equal");
	 else printf("Not equal");
	 break;
      default:
	 printf("enter valid choice");
   }
   return 0;
}

