#include<stdio.h>

float add(float a, float b)
{
    return a + b;
}

float sub(float a, float b)
{
    return a - b;
}

float mul(float a, float b)
{
    return a * b;
}

float div(float a, float b)
{
    return a / b;
}

void main()
{
    float a, b, result;
    int choice;
    float (*ptr[4])(float, float) = {add, sub, mul, div};
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if (choice < 1 || choice > 4)
    {
        printf("Invalid choice\n");
        return;
    }
    result = (*ptr[choice - 1])(a, b);
    printf("Result: %.2f\n", result);
}