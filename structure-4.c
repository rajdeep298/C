/* pointer to strucure*/
#include<stdio.h>
struct book_bank
{
  char book_name[50];
  char book_author[50];
  int page_number;
  int publishing_year;
  float price;
};
struct book_bank b1={"Feluda","Satyajit Ray",2000,2021,1200};// this structure is defined as global variable so it can be accesed anywhere in the program
void main()
{
struct book_bank *ptr=&b1;//struct book_bank *ptr=b1; is wrong type of initialization. Unlike arrays we have to put "&" sign before the  structure variable while assigning it to the pointer
printf("Address of b1->%x\nAddress of ptr->%x\nContent in ptr->%x",&b1,&ptr,ptr);
printf("\n----------------------------------------------------------------"); 
printf("\n Size of structure book_bank:%d",sizeof(struct book_bank));  
printf("\n----------------------------------------------------------------");
printf("\n *ptr means:\n%s\n%s\n%d\n%d\n%f",*ptr);// this will properly print the value of the member book_name as it is the first element of the structure and ptr points to the base adress of the structure so it will print book_name properly.
printf("\n----------------------------------------------------------------");
printf("\n *ptr means:\n%s\n%s\n%d\n%d\n%.2f",ptr->book_name,ptr->book_author,ptr->page_number,ptr->publishing_year,ptr->price);// proper way to print the values from a structure pointer
printf("\n----------------------------------------------------------------");
/* or we can write*/
printf("\n *ptr means:\n%s\n%s\n%d\n%d\n%.2f",(*ptr).book_name,(*ptr).book_author,(*ptr).page_number,(*ptr).publishing_year,(*ptr).price);
}