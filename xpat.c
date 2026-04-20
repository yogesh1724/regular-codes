#include <stdio.h>
#include <string>
void Square(char *Str)
{
   int i,j,n=strlen(Str);
   for(i=0;i<n;i++){
      for(j=0;j<n;j++){
	 if(j==i || j==n-i-1){
	    printf("%c",Str[j]);
	 }
	 else{
	    printf(" ");
	 }
      }
      printf("\n");
   }
}
int main() {
   XSquare("12345");
   return 0;
}
