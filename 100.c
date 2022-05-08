/* c programme to check whether a number */
#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
    printf("\n Enter a number: ");
    scanf("%d", &i);
    if(i>100)
    {
        printf("\n Greater.");
    }
    else if(i<100)
    {
        printf("\n Lesser.");
    }
    else
    {
        printf("\n Equal.");
    }
}