/* Linear Probing*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int n;
int insert;
int hash_function(int a)
{
    int val=0;
    val=a%n;      
    return val;
}
void display(int*a,int n)//inserting element in the array
{
    int i;
    for(i=0;i<n;i++)
    {
      printf("\n  The elements of the array are-%d:%d",i,a[i]);
    }
}
int Linear_probing(int *H,int k)
{
    int flag=0,index;
    int i;
    index=hash_function(k);
    if(index>=n)
    {
        printf("\n Error:Index value out of range\n");
        exit(0);
    }
    if(k==*(H+index))
    {
        return index;
        exit(0);
    }
    else
    {
        i=index;
        while((i!=index-1) && (!flag))
        {
            if(*(H+i)==0)
            {
                if(insert)
                {
                    H[i]=k;
                    flag=1;
                    return i;
                }
            }
            else if(*(H+i)==k)
            {
                flag=1;
                return i;
                exit(0);
            }
            else
            {
                i=(i+1)%n;
            }
        }
        if((flag==0) &&(i==index))
        {
            printf("\n Hash Table Overflow\n");
        }
    }
}
void main()
{
  int i,j,k,l,a[1000]={};
  char ch;
  system("cls");
  printf("\n Enter the number of elements on the array:");
  scanf("%d",&n);
  start:
  printf("\n Enter the key element to search/insert:");
  scanf("%d",&k);
  printf("\n If you want to insert the item press 1 else 0: ");
  printf("\n-->>");
  scanf("%d",&insert); 
  i=Linear_probing(a,k);
  display(a,n);
  printf("\n Element placed/found at index: %d",i);
  printf("\n If you want to continue the process the press Y or y");
  printf("\n-->>");
  ch=getch();
  if (ch=='Y' || ch=='y')
  {
    goto start;
  }
}
/* 
*/