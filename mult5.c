/* check whether a number is multiple of 5 or not */
#include<stdio.h>
void main()
{
    int n;
    printf("\n Enter a Number: ");
    scanf("%d", &n);
    if(n%5==0) printf("\n Yes.");
    else printf("\n No.");
}