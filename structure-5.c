/*Array of strucutre*/
#include<stdio.h>
#include<stdlib.h>
struct book_bank
{
  char book_name[50];
  char book_author[50];
  int page_number;
  int publishing_year;
  float price;
};
void main()
{
    int i,n;
    printf("\n Enter the number of books:");
    scanf("%d",&n);
    struct book_bank b[100];
   /*struct book_bank *b=malloc(n*sizeof(struct book_bank));*/
   for(i = 1; i <=n;i++)
   {
       printf("\n Enter data for book-%d->",i);
        printf("\nEnter book name:");
        scanf("%s",&b[i].book_name);
        printf("\nEnter book author:");
        scanf("%s",&b[i].book_author);
        printf("\n Enter Page number:");
        scanf("%d",&b[i].page_number);
        printf("\n Enter publishing_year:");
        scanf("%d",&b[i].publishing_year);
        printf("\n Enter price:");
        scanf("%5f",&b[i].price);
   }
    printf("\n----------------------------------------------------------------");
   for( i = 1; i <=n;i++)
   {
       printf("\nData for book-%d->",i);
       printf("\nBook name:%s",b[i].book_name);
       printf("\nBook Author name:%s",b[i].book_author);
       printf("\nBook page number:%d",b[i].page_number);
       printf("\nBook Publishing year:%d",b[i].publishing_year);
       printf("\nBook Price:%f",b[i].price);
       printf("\n----------------------------------------------------------------");
   }
}