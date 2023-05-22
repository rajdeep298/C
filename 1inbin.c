/*No of 1 in the binary representation of a decimal integer (consider 2's complement of the number if it is negative).*/
#include<stdio.h>
#include<conio.h>
void main() 
{
    int n,i,j=0,a[100],k,temp,count=0;
    printf("\n Enter the Number:");
    scanf("%d",&n);
    temp=n;
    if(n<0)
    {
        n=n*(-1);
        temp=n;
        for(i=0;n>0;i++)
       {
          a[i]=n%2;
           n=n/2;
       }
         k=i;
       for(i=0;i<k;i++)
       {
        if(a[i]==1)
        {
          a[i]=0;
        }
        else
        {
            a[i]=1;
        }
       }
       for(i=0;i<k;i++)
       {
          if(a[i]==0)
          {
            a[i]+=1;
            goto print;
          }
          else if(a[i]==1)
          {
            a[i]=0;
            a[i+1]+=1;
          }
       }
       print:
        for(i=k-1;i>=0;i--)
        {
       if(a[i]==1)
           {
             count++;
           }
        }
        printf("\nNo of 1 in the binary representation of the number%d: %d\n",temp,count);  
    }
    else
    {
    for(i=0;n>0;i++)
    {
       a[i]=n%2;
       n=n/2;
    }
    for(i=i-1;i>=0;i--)
    {
       if(a[i]==1)
           {
             count++;
           }
    }
        printf("\nNo of 1 in the binary representation of the number%d: %d\n",temp,count);
    }
}
/*
 Enter the Number:-23

No of 1 in the binary representation of the number23: 2
 Enter the Number:23

No of 1 in the binary representation of the number23: 4 */
/*No of 1 in the binary representation of a decimal integer (consider 2's complement of the number if it is negative).*/
//#include<stdio.h>
//#include<conio.h>
//void main()
//{
//    int n,i,j=0,a[100],k,temp,count=0;
//    printf("\n Enter the Number:");
//    scanf("%d",&n);
//    temp=n;
//    if(n<0)
//    {
//        n=n*(-1);
//        temp=n;
//        for(i=0;n>0;i++)
//       {
//          a[i]=n%2;
//           n=n/2;
//       }
//         k=i;
//       for(i=0;i<k;i++)
//       {
//        if(a[i]==1)
//        {
//          a[i]=0;
//        }
//        else
//        {
//            a[i]=1;
//        }
//       }
//       for(i=0;i<k;i++)
//       {
//          if(a[i]==0)
//          {
//            a[i]+=1;
//            goto print;
//          }
//          else if(a[i]==1)
//          {
//            a[i]=0;
//            a[i+1]+=1;
//          }
//       }
//       print:
//        for(i=k-1;i>=0;i--)
//        {
//       if(a[i]==1)
//           {
//             count++;
//           }
//        }
//        printf("\nNo of 1 in the binary representation of the number%d: %d\n",temp,count);
//    }
//    else
//    {
//    for(i=0;n>0;i++)
//    {
//       a[i]=n%2;
//       n=n/2;
//    }
//    for(i=i-1;i>=0;i--)
//    {
//       if(a[i]==1)
//           {
//             count++;
//           }
//    }
//        printf("\nNo of 1 in the binary representation of the number%d: %d\n",temp,count);
//    }
//}
/*
 Enter the Number:-23

No of 1 in the binary representation of the number23: 2
 Enter the Number:23

No of 1 in the binary representation of the number23: 4 */
