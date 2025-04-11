/* Random Probing */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int n;
int insert;
int m;
int hash_function(int a)
{
    int val=0;
    val=a%n+1;
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
int prime(int x)
{
    int i,j,f;
    f=0;
    for(i=2;i<=sqrt(x);i++)
    {
        if(x%i==0)
        {
            f=1;
            break;
        }
        else
        {
            continue;
        }
    }
    return f;
}
int Random_probing(int *H,int k)
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
                i=((i+m)%n)+1;
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
  int i,j,k,l,a[1000]={},m;
  char ch;
  system("cls");
  printf("\n Enter the number of elements on the array:");
  scanf("%d",&n);
  printf("\n Enter a value for m(it should be a prime number):");
  scanf("%d",&m);
  next:
  if(prime(m)!=0)
  {
    printf("\nPlease Enter a prime Number: ");  
    goto next; 
  }
  start:
  printf("\n Enter the key element to search/insert:");
  scanf("%d",&k);
  printf("\n If you want to insert the item press 1 else 0");
  printf("\n-->>");
  scanf("%d",&insert);
  i=Random_probing(a,k);
  display(a,n);
  printf("\n Element found at index: %d",i);
  printf("\n If you want to continue the process the press Y or y");
  printf("\n-->>");
  ch=getch();
  if (ch=='Y' || ch=='y')
  {
    goto start;
  }
}
/* Enter the number of elements on the array:10

 Enter a value for m(it should be a prime number):3

 Enter the key element to search/insert:234

 If you want to insert the item press 1 else 0
-->>1

  The elements of the array are-0:0
  The elements of the array are-1:0
  The elements of the array are-2:0
  The elements of the array are-3:0
  The elements of the array are-4:0
  The elements of the array are-5:234
  The elements of the array are-6:0
  The elements of the array are-7:0
  The elements of the array are-8:0
  The elements of the array are-9:0*/