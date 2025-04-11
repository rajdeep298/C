#include<stdio.h>
int main()
{
	int y;
	printf("Enter a year...");
	scanf("%d",&y);
	/*if(y%100==0)
	{
		if(y%400==0)
		{
			printf("Leap year");
		}
		else
		{
			printf("Not a leap year");
		}
	}
	else
	{
		if(y%4==0)
		{
			printf("Leap year..");
		}
		else
		{
			printf("Not a leap year...");
		}
	}*/
	if(y%4==0&&y%100!=0||y%400==0)
	{
		printf("Leap year...");
	}
	else
	{
		printf("Not a leap year..");
	}
	return 100;
}
