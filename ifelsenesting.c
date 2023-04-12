#include<stdio.h>
#include<conio.h>
int main()
{
    long int year;
    printf("\n Enter the year: ");
    scanf("%ld", &year);
    if(year%400==0)
    {
        printf("%ld is a Leap year.\n",year);
    }
    else
    {
      if(year%100==0) printf("\n %ld is not a Leap year",year);
      else 
      {if(year%4==0) printf("\n %ld is  a Leap year",year);
      else printf("\n %ld is not a Leap year",year);}
    }
    return 0;
}