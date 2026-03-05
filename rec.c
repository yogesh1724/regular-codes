#include<stdio.h>
int main()
{
   int tam,eng,mat,phy,chem,cs,total,avg;
   printf("enter the marks of tam,eng,mat,phy,chem,cs:");
   scanf("%d%d%d%d%d%d",&tam,&eng,&mat,&phy,&chem,&cs);
   total=tam+eng+mat+phy+chem+cs;
   printf("the total of all subjects:%d\n",total);
   avg=total/6;
   printf("the average of all subjects:%d\n",avg);
   if((avg>=85)&&(avg<=100))
      printf("a grade\n");
   else if((avg>=75)&&(avg>=85))
      printf("b grade\n");
   else if((avg<=65)&&(avg>=75))
      printf("c grade\n");
   else if((avg>=50)&&(avg<=65))
      printf("d grade\n");
   else if(avg<=50)
   printf("fail\n");
   return 0;
}
