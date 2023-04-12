/* Pointer to union*/
#include<stdio.h>
union book_bank
{
  char book_name[50];
  char book_author[50];
  int page_number;
  int publishing_year;
  float price;
};
union book_bank b1={"Feluda","Satyajit Ray",2000,2021,1200.00};
void main()
{
    union book_bank *ptr=&b1;
    printf("\n *ptr means:\n%s\n%s\n%d\n%d\n%f",*ptr);// this will properly print the value of the member book_name as it is the first element of the structure and ptr points to the base adress of the structure so it will print book_name properly.
    printf("\n----------------------------------------------------------------");
    printf("\n *ptr means:\n%s\n%s\n%d\n%d\n%.2f",ptr->book_name,ptr->book_author,ptr->page_number,ptr->publishing_year,ptr->price);// proper way to print the values from a structure pointer
}