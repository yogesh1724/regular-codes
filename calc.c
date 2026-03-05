#include<stdio.h>
#include <math.h>
void sim(int p, float r, int t)
{
       int si;
       si = (p * r * t) / 100;
       printf("Simple interest: %d\n", si);
}
void com(int p, float r, int t)
{
       double amount = p * pow(1 + r / 100, t);
       int ci = (int)(amount - p);
       printf("Compound interest: %d\n", ci);
}
int main()
{
       int principle, time;
       float rate;
       printf("Enter the principle amount: ");
       scanf("%d", &principle);
       printf("Enter the rate of interest: ");
       scanf("%f", &rate);
       printf("Enter the time (years): ");
       scanf("%d", &time);
       sim(principle, rate, time);
       com(principle, rate, time);
       return 0;
}

