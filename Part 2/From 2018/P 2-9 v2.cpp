#include<stdio.h>
int main()
{
	int x = 100;
	int *p = NULL;

	*p = x; //Extra likhsi. Boi ey nai. CHECK BOOK. 

	printf("Value of x: %d\n", x);
	printf("Value of *p: %d\n", *p);

	return 0;
}
