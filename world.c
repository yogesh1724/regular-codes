#include<stdio.h>
int main()
{
   char vowel;
   printf("enter the character:");
   scanf("%c",&vowel);
   switch(vowel)
   {
      case 'a':
	 printf("it is vowel");
	 break;
      case 'e':
	 printf("it is vowel");
	 break;
      case 'i':
	 printf("it is vowel");
	 break;
      case 'o':
	 printf("it is vowel");
	 break;
      case 'u':
	 printf("it is vowel");
	 break;
      case 'A':
	 printf("it is vowel");
	 break;
      case 'E':
	 printf("it is vowel");
	 break;
      case 'I':
         printf("it is vowel");
	 break;
      case 'O':
	 printf("it is vowel");
         break;
      case 'U':
         printf("it is vowel");
         break;
      default:
	 printf("it is consonants");
   }
   return 0;
}
