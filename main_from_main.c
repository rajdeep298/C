 // C program to illustrate calling main() function in main() itself
#include "stdio.h"
int main()
{
	static int N = 10;
	if (N > 0) 
    {
		printf("%d ", N);
		N--;
		main();
	}
}