/*Heap Sort*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<stdbool.h>
int a[1000]={0};
int b[1000]={0};
int create_heap(int n);
int rebuild_heap(int n);
void insert(int n);
int remove_max(int n);
void display(int n);
void display(int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\n Array[%d]:%d",i,a[i]);
    }
}
void insert(int n)
{
    int i;
    for(i=0;i<n;i++)
    {
      printf("\n Enter the elements of the array-%d:",i);
      scanf("%d",&a[i]);
    }
}
int remove_max(int n)
{
    return(n-1);
}
int create_heap(int n)
{
    int i=1,j,k,l;
    while(i<n)
    {
        int x=a[i];
        b[i]=x;
        j=i;
        while(j>1)
        {
            if(b[j]>b[j/2])
            {
                b[j/2]=b[j]+b[j/2]-(b[j]=b[j/2]);
                j=j/2;
            }
            else
            {
                j=1;
            }
        }
        i++;
    }
}
int rebuild_heap(int n)
{
    int i,j,k,l,lc,rc;
    bool flag;
    if(n==1) 
    {
        exit(0);
    }
    else
    {
        j=1;
        flag=true;
        while(flag)
        {
            lc=2*j;
            rc=2*j+1;
            if(rc<=n)
            {
                if(b[j]<=b[lc] && b[rc]<=b[lc])
                {
                    b[j]=b[j]+b[lc]-(b[lc]=b[j]);
                    j=lc;
                }
                else if(b[j]<=b[rc] && b[rc]>=b[lc])
                {
                    b[j]=b[j]+b[rc]-(b[rc]=b[j]);
                    j=rc;
                }
                else
                {
                    flag=false;
                }
            }
            else if(lc<=n)
            {
                if(b[j]<=b[lc])
                {
                    b[j]=b[j]+b[lc]-(b[lc]=b[j]);
                    j=lc;
                }
                else
                {
                    flag=false;
                }
                
            }
        }
    }
}
void main()
{
    int n;
    printf("\nEnter the number of elememts in the array:");
    scanf("%d",&n);
    insert(n);
    display(n);
    create_heap(n);
    n=remove_max(n);
    rebuild_heap(n);
    printf("\nSorted Array:");
    display(n);
}