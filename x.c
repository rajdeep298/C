#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
int i,j,r1,r2,r3,max1=0,max2=0,max3=0,comp;
comp=(n<k)?n:k;
for(i=1;i<=n;i++)
{
    for(j=1;j<=k && i!=j ;j++)
    {
    r1=i&j;
    r2=i|j;
    r3=i^j;
    if(max1<=r1 &&r1<comp)
    {
        max1=r1;
    }
    if(max2<=r2&& r2<comp )
    {
      max2=r2;
    }
    if(max3<=r3&& r3<comp)
    {
      max3=r3;
    }
    }
}
printf("%d\n%d\n%d",max1,max2,max3);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}