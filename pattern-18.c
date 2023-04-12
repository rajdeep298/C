/* 11111111
   10000001
   10000001
   10000001
   10000001
   11111111 */
   #include<stdio.h>
   void main() 
   {
       int m,n,i,j,k;
       printf("\n Enter the number of the rows:");
       scanf("%d",&m);
       printf("\n Enter the number of the columns:");
       scanf("%d",&n);
       for(i=1;i<=m;i++)
       {
           for(j=1;j<=n;j++)
           {
               if(i==1||i==m||j==1||j==n) printf("1");
               else printf("0");
           }
           printf("\n");
       }
   }