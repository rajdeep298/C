/* Program to separate odd and even elements from an array. */
    #include<stdio.h>
    #include<conio.h>
    void main()
    {
    int a[20],b[20],c[20],k=0,j=0,n,i;
    printf("\n Enter the number of elements in the array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      printf("\n Enter the elements of the array-%d:",i);
      scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       if(a[i]%2==0) 
       {
           b[j]=a[i];
           j++;
       }
       else
       {
           c[k]=a[i];
           k++;
       }
    }
         printf("\nThe odd elements of  are:");
        for (i = 0; i < k; i++)
        {
            printf("%d ", c[i]);
        }
 
        printf("\nThe even elements of  are:");
        for (i = 0; i < j; i++)
        {
            printf("%d ", b[i]);
        }
    }