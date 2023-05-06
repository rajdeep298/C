#include<stdio.h>
#include<conio.h>
int fibonacci(int n,int ft, int st, int ct){
    if(n==0) return 0;
    ct=st+ft;
    printf("%d\t",ct);
    ft=st;
    st=ct;
    fibonacci(--n,ft,st,ct);
}
void main(){
    int n,ct,ft,st;
    ft=ct=0;
    st=1;
    do{
        printf("\nEnter the number of elements you want to print:");
        scanf("%d",&n);
    }while(n<3);
    printf("\nThe fibonacci series is:%d\t%d\t",ft,st);
    fibonacci(n-2,ft,st,ct);
}