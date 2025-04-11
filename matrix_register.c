/*designing a register of a shop*/
#include<stdio.h>
void main()
{
    int i,q[5];
    int item;
    printf("\n Item Number:");
    scanf("%d",&item);
    float r[5],value=0,total_value;
    char code[5];
    i=0;
    while(i<item)
    {
      printf("\n Enter code, quantity,rate:");
      scanf(" %s%d%f",&code[i],&q[i],&r[i]);
      i++;
    }
    printf("\n\n");
    printf("                INEVENTORY REPORT               \n");
    printf("Code Quantity  Rate Value\n");
    total_value = 0;
    i=0;
    while(i<item)
    {
        value=q[i]*r[i];
        printf("%5s %10d %10.2f %e",code[i],q[i],r[i],value);
        total_value+=value;
        i++;
    }
    printf("\n-------------------------------------------------------");
    printf("                             Toatl Value:%e\n",total_value);
    printf("\n-------------------------------------------------------");
}