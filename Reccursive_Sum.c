#include<stdio.h>
#include<conio.h>
int add(int *a,int n,int sum){
    if(n<0) return sum;
    sum+=a[n];
    return add(a,n-1,sum);
}
void main(){
    int n,i,sum=0;
    printf("\nEnter the number of elements to add: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("\nA[%d]: ",i);
        scanf("%d",&a[i]);
    }
    sum=add(a,n-1,sum);
    printf("\nThe sum of these numbers are:%d",sum);
}