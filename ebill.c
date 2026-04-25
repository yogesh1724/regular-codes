#include <stdio.h>
void first(int units)
{
   float bill=0;
   if (units <= 100) 
   {
      bill = 0;
   }
   else if (units <= 200) {
      bill = (units - 100) * 3;
   }
   else if (units <= 300) {
      bill = (100 * 3) + (units - 200) * 5;
   }
   else if (units <= 400) {
      bill = (100 * 3) + (100 * 5) + (units - 300) * 8;
   }
   else
   {
      bill = (100 * 3) + (100 * 5) + (100 * 8) + (units - 400) * 10;
   }
   printf("Total electricity bill: ₹%.2f\n", bill);
}
 int main()
{
   int units;
   printf("Enter the number of electricity units consumed: ");
   scanf("%d", &units);
   first(units);
   return 0;
}
