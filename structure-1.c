/* Defining a structure*/
#include<stdio.h>
struct book_bank
{
  char book_name[50];
  char book_author[50];
  int page_number;
  int publishing_year;
  float price;
}b2={"Taranath Tantrik","Bibhutibhusan Bandopadhay",500,2021,350.878};//initialization outside of main
struct book_bank b3={"Tenida","Narayan Ganguly",400,2015,450};//declaration of structure variable
void main()
{
   struct book_bank b;
   printf("\n Size of the structure: %d",sizeof(struct book_bank));
   printf("\n------------------------------------------------------------------------------------------------");
   struct book_bank b1={"Feluda","Satyajit Ray",2000,2021,1200};//compile time intialization 
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
   printf("\n->Data of book1:\n%s\n%s\n%d\n%d\n%.2f",b.book_name,b.book_author,b.page_number,b.publishing_year,b.price);
   printf("\n->Data of book2:\n%s\n%s\n%d\n%d\n%.2f",b1.book_name,b1.book_author,b1.page_number,b1.publishing_year,b1.price);
   printf("\n->Data of book3:\n%s\n%s\n%d\n%d\n%.2f",b2.book_name,b2.book_author,b2.page_number,b2.publishing_year,b2.price);
}
