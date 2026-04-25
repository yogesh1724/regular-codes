#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d", &n);
    if (n == 1) {
        printf("1");
        return 0;
    }
    
    int len=n*2-1; 
    int grid[len][len];
    
    int ctr=n;
    for(int i=0;i<len;i++) { 
        for(int x=i;x<len-i;x++) {
            for(int y=i;y<len-i;y++) {
                grid[x][y]=ctr;
            }
        }
        ctr-=1;
    }
    
    for (int i =0;i<len;i++) { 
        for (int j=0;j<len;j++) {
            printf("%d ",grid[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
