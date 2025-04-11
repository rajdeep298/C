#include<stdio.h>
#include<conio.h>
int main()
{
    char letter;
    printf("\n Enter the letter: ");
    scanf("%c", &letter);
    if((letter>=65)&&(letter<=90)||(letter>=97)&&(letter<=122))
    {
      printf("\n You have entered a alphabet.");
    }
    else
    {
    printf("\n You have  not entered a alphabet.");
    }
    return 0;
}