/*defining a union*/
#include<stdio.h>
union u
{
  char book_name[50];
  char book_author[50];
  int page_number;
  int publishing_year;
  float price;
  double barcode;
};//u1={"Taranath Tantrik","Bibhutibhusan Bandopadhay",500,2021,350.878,123456789};
void main()
{
 printf("\nSize of the union:%d",sizeof(union u));
 //printf("\n->Data of book:\n%s\n%s\n%d\n%d\n%.2f\n%ld",u1.book_name,u1.book_author,u1.page_number,u1.publishing_year,u1.price,u1.barcode);
}