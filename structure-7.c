/*structure as function argumnets*/
#include<stdio.h>
struct employee 
{
  char name[256];
  int age;
  int work_experience;
};
void compare(struct employee e1, struct employee e2)
{
   printf("Employee-%s is more experienced than employee-%s.",(e1.work_experience>e2.work_experience)?e1.name:e2.name,(e1.work_experience<e2.work_experience)?e1.name:e2.name);
}
void main()
{
    struct employee e1={"Rajdeep Kundu",28,5};
    struct employee e2={"Ram Das",25,2};
    compare(e1,e2);
}