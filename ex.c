#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,k;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    while(n!=0)
    {
        k=k+(n%10);
        n= n/10;
    }
    printf("%d",k);
    return 0;
}
