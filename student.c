#include<stdio.h>
int main()
{
   char a[15];
   int  n,i,r,count=0,choice,j,flag;
   printf("enter the total value:");
   scanf("%d",&n);
   printf("enter the elements one by one...");
   for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }
   printf("enter the choice:");
   scanf("%d",&choice);
   switch(choice)
   {
      case 1:
      printf("enter the elements to count:");
      scanf("%d",&j);
      for(i=0;i<n;i++)
      {
	 if(j==a[i])
	    count++;
      }
      printf("the number of occurances in the array is:%d",count);
      break;

      case 2:
      printf("enter the value to be searched...");
      scanf("%d",&r);
      for(i=0;i<n;i++)
      {
	 if(a[i]==r)
	 {
	    printf("the position of the elements is :%d",i);
	    flag=1;
	    break;
	 }
      }
      if(flag==1)
	 printf("element is not found....");
      else
	 printf("element is found....");
      break;
default:
      printf("invalid choice...");
break;
   }
   return 0;
}
  




