#include<stdio.h>
int main()
{
   int a[6],i,j,temp=0,n;
   printf("enter the elements in array:");
   scanf("%d",&n);
   printf("enter the elements one by one:");
   for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }
   for(i=0;i<n-1;i++)
   {
      for(j=i+1;j<n;j++)
      {
	 if(a[i]>a[j])
	 {
	 temp=a[i];
	 a[i]=a[j];
	 a[j]=temp;
	 }

      }
   }
   printf("the sorted numbers");
   for(i=0;i<n;i++)
   {
      printf("%d\t",a[i]);
   }
   return 0;
}




