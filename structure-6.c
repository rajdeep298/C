/*structure in structure*/
#include<stdio.h>
struct book_bank
{
  char book_name[50];
  char book_author[50];
  int page_number;
  int publishing_year;
  float price;
  struct book_bank1
  {
  char book_name1[50];
  char book_author1[50];
  int page_number1;
  int publishing_year1;
  float price1;
  }b1,b2;
};
void main()
{
    struct book_bank b;
  printf("\n Size of the inner structure:%d",sizeof(struct book_bank1));
  printf("\n Size of the outer structure:%d",sizeof(struct book_bank));
  printf("\n enter data for outer structure->");
    printf("\n Enter data of book1: \n");//runtime intialization
   printf("\nEnter book name:");
   scanf("%s",&b.book_name);
   printf("\nEnter book author:");
   scanf("%s",&b.book_author);
   printf("\n Enter Page number:");
   scanf("%d",&b.page_number);
   printf("\n Enter publishing_year:");
   scanf("%d",&b.publishing_year);
   printf("\n Enter price:");
   scanf("%5f",&b.price);
   printf("\nEnter data for the first inner structure:");
   scanf("\n%s\n%s\n%d\n%d\n%f",&b.b1.book_name1,&b.b1.book_author1,&b.b1.page_number1,&b.b1.publishing_year1,&b.b1.price1);
   printf("\n----------------------------------------------------------------");
   printf("\n Data of the structure:\n%s\n%s\n%d\n%d\n%.2f\n->Data of inner:\n%s\n%s\n%d\n%d\n%.2f",b.book_name,b.book_author,b.page_number,b.publishing_year,b.price,b.b1.book_name1,b.b1.book_author1,b.b1.page_number1,b.b1.publishing_year1,b.b1.price1);
   printf("\n----------------------------------------------------------------");
   printf("\nEnter data for the second inner structure:");
   scanf("\n%s\n%s\n%d\n%d\n%f",&b.b2.book_name1,&b.b2.book_author1,&b.b2.page_number1,&b.b2.publishing_year1,&b.b2.price1);
    printf("\n Data of the structure:\n%s\n%s\n%d\n%d\n%.2f\n->Data of 1st inner:\n%s\n%s\n%d\n%d\n%.2f\n->Data of 2nd inner:\n%s\n%s\n%d\n%d\n%.2f",b.book_name,b.book_author,b.page_number,b.publishing_year,b.price,b.b1.book_name1,b.b1.book_author1,b.b1.page_number1,b.b1.publishing_year1,b.b1.price1,b.b2.book_name1,b.b2.book_author1,b.b2.page_number1,b.b2.publishing_year1,b.b2.price1);
}