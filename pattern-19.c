/*  1  2  3  4  5  6 
    2  3  4  5  6  7 */
    #include<stdio.h>
    void main() 
    {
        int i,j,k,m,n;
        printf("\n Enter the number of rows: ");
        scanf("%d",&m);
        printf("\n Enter the number of columns: ");
        scanf("%d",&n);
        for(i=1;i<=m;i++) 
        {
            for(j=i;j<i+n;j++) 
            {
              printf("%d  ",j);
            }
            printf("\n");
        }
    }