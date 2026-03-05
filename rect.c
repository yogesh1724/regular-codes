#include<stdio.h>
int main()
{
   int i=6,*j,**k,***l;
   j=&i;
   k=&j;
   l=&k;
   printf("the value of i is %d\n",i);
   printf("the value of i addres is %d\n",&i);
   printf("the value of j is %d\n",j);
   printf("the value of j address is %d\n",&j);
   printf("the value of k is %d\n",k);
   printf("the value of k address is %d\n",&k);
   printf("the value of j3 is %d\n",*j);
   printf("the value of k3 is %d\n",**k);
   printf("the value of l3 is %d\n",***l);
   return 0;
}

