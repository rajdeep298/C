/*format specifiers of float in C */
#include<stdio.h>
void main()
{
    float a=9587.65236;
    printf("%9.5f\n",a);
    printf("%9.2f\n",a);
    printf("%-7.2f\n",a);
    printf("%f\n",a);
    printf("%11.2e\n",a);
    printf("%-11.2e\n",a);
    printf("%e\n",a);
}
