/* even number right handed triangle of numbers:
2
242
24642
2468642
2468108642
 */

#include<stdio.h>
void main()
{
    int i,j,m,n;
    printf("\n Enter the number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=2;j<=i*2;j+=2)
        {
            printf("%d",j);
        }
        for(j=2*(i-1);j>=2;j-=2)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    
}
