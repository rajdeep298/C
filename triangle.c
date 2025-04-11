#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\n Enter three sides of a triangle:");
	scanf("%d %d %d",&a,&b,&c);
	if(a+b>c && b+c>a && a+c>b)
	{
		if(a==b&&a!=c || b==c&&b!=a || c==a&&c!=b)
		{
			printf("\n The trinagle is iscoceles triangle.");
		}
		else if (a==b && a==c)
		{
			printf("\n The triangle is equilateral.");
		}
		else if(a!=b && a!=c)
		{
			printf("\n The triangle is  ``scalen.");
		}
	}
	else
	{
		printf("Not a triangle...");
	}
	return 0;
}
