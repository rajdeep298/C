/* Comparison in members of structures*/
#include<stdio.h>
struct book_bank
{
  char book_name[50];
  char book_author[50];
  int page_number;
  int publishing_year;
  float price;
}b2={"Taranath Tantrik","Bibhutibhusan Bandopadhay",500,2020,350.878};
void main()
{
    struct book_bank b1={"Feluda","Satyajit Ray",2000,2021,1200};//compile time intialization
    if(b1.page_number>b2.page_number)
    {
        printf("\n Feluda is more thick book.");
    }
    else
    {
        printf("\n Taranath Tantrik is more thick book.");
    }
    if(b1.price>b2.price)
    {
        printf("\nFeluda is more expensive.");
    }
    else
    {
        printf("\n Taranath Tantrik is more expensive.");
    }
    if(b1.publishing_year>b2.publishing_year)
    {
        printf("\n Feluda is old book.");
    }
    else
    {
        printf("\n Taranath Tantrik is old book.");
    }
}