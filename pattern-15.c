/* 
1
01
010
1010
10101 */
  #include<stdio.h>
  void main()
  {
      int i,j,k,n;
      printf("\n Enter the limit:");
      scanf("%d",&n);
      for(i=1;i<=n;i++)
      {
          for(j=1;j<=i;j++)
          {
              printf("%d",k%2);
              k++;
          }
          printf("\n");
      }
     
  }