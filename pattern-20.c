/* 1 2 3 4 5 6 
   7 8 9 10 11 12 
   13 14 15 16 17 18 19 */
   #include<stdio.h>
   void main()
   {
       int i,j,k=1,m,n;
       printf("\n Enter the number of rows:");
       scanf("%d",&m);
       printf("\n Enter the number of columns:");
       scanf("%d",&n);
       for(i=1;i<=m;i++)
       {
           for(j=1;j<=n;j++)
           {
               printf("%3d",k++);
           }
           printf("\n");
       }
   }
   