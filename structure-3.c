/* Partial initialization of a structure*/
#include<stdio.h>
struct book
{
    float price;
    int publishing_year;
    int page_number;
    char book_name[100];
}b={238};
void main()
{
  printf("\n->Info of the book:\n%.2f,\n%d,\n%d,\n%s",b.price,b.publishing_year,b.page_number,b.book_name);
}
