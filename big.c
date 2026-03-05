#include<stdio.h>
struct college
{
   char state[20];
   int e;
   int m;
   int md;
   int s;
};
int main()
{
   int i,j,n,max,temp,tc[250];
   struct college c[20];
   printf("enter the number:\t");
   scanf("%d",&n);
   printf("\n enter the state & no.of colleges:\t");
   for(i=0;i<n;i++)
   {
      scanf("%s",c[i].state);
      scanf("%d%d%d%d",&c[i].e,&c[i].m,&c[i].md,&c[i].s);
   }
   for(i=0;i<n;i++)
   {
      tc[i]=c[i].e+c[i].m+c[i].md+c[i].s;
      printf("%s has %d of college\n",c[i].state,tc[i]);
   }
   for(i=0;i<n-1;i++)
   {
      for(j=i+1;j<n;j++)
      {
	 if(tc[i]>tc[j])
	 {
	    temp=tc[i];
	    tc[i]=tc[j];
	    tc[j]=temp;
	 }
	 max=tc[j];
      }
   }
   printf("\n max no.of colleges %d is in the %s state",max,c[i].state);
   return 0;
}

