/* Double Hashing/Re-Hashing */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int n;
int insert;
void display(int*a);
int H1(int x);
int H2(int y);
int ReHashing(int *h, int k);
void display(int*a)//inserting element in the array
{
    int i;
    for(i=0;i<n;i++)
    {
      printf("\n  The elements of the array are-%d:%d",i,a[i]);
    }
}
int H1(int x)
{
    int i;
    i=(x%n)+1;
    return i;
}
int H2(int y)
{
    int j;
    j=(y%(n-4))+1;
    return j;
}
int Double_Hashing(int *h, int k)
{
    int index,i,m,flag=0;
    index=H1(k);
    m=H2(k);
    if (k==*(h+index))
    {
        return index;
        exit(0);
    }
    else
    {
        i=index;
        while(i!=index-1 && (!flag))
        {
            if(*(h+i)==0)
            {
                if(insert)
                {
                    *(h+i) =k;
                    flag=1;
                    return i;
                }
            }    
            else if(*(h+i)==k)
            {
                return i;
                flag=1;
                exit(0);
            }
            else
            {
                i=((i+m)%n)+1;
            }
            
        }
    }
}
void main()
{
    int a[1000]={},i,j,k,l,m; 
    char ch;
    printf("\n Enter the number of elements in the array:");
    scanf("%d",&n);
    start:
    printf("\nEneter the value to insert/search:");
    scanf("%d",&k);
    printf("\n If you want to insert an element then press 1:");
    scanf("%d",&insert);
    i=Double_Hashing(a,k);
    display(a);
    printf("\n The element is found/inserted at position:-%d",i);
    printf("\n If you want to continue the process then press y or Y");
    printf("\n-->>");
    ch=getch();
    if(ch=='y' || ch=='Y')
    {
        goto start;
    }
}
/* *******************************OUTPUT*******************************
Enter the number of elements in the array:11
Eneter the value to insert/search:50

 If you want to insert an element then press 1:1
index=(50%11)+1=7
m=(50%(11-4))+1=2
*(h+7) =k
 The elements of the array are-0:0
  The elements of the array are-1:0
  The elements of the array are-2:0
  The elements of the array are-3:0
  The elements of the array are-4:0
  The elements of the array are-5:0
  The elements of the array are-6:0
  The elements of the array are-7:50
  The elements of the array are-8:0
  The elements of the array are-9:0
  The elements of the array are-10:0
The element is found/inserted at position:-7
 If you want to continue the process then press y or Y
-->>
Eneter the value to insert/search:6 
 If you want to insert an element then press 1:1
index=(6%11)+1=7
m=(6%(11-4))+1=7
*(h+i)!=0 but ==50
i=((7+7)%11)+1=4
now,*(h+i)==0
*(h+i) =6
  The elements of the array are-0:0
  The elements of the array are-1:0
  The elements of the array are-2:0
  The elements of the array are-3:0
  The elements of the array are-4:6
  The elements of the array are-5:0
  The elements of the array are-6:0
  The elements of the array are-7:50
  The elements of the array are-8:0
  The elements of the array are-9:0
  The elements of the array are-10:0
The element is found/inserted at position:-4
*/