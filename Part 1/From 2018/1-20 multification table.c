#include<stdio.h>
int main()
{
	printf("Printing the tables upto 20:::>\n");
	int i,j;
	for(i=0;i<20;i++)
	{
		printf("The table of %d is as follows:\n",(i+1));
		for(j=0;j<10;j++)
		{
			printf("%d X %d = %d\n",(i+1),(j+1),(i+1)*(j+1));

		}
		printf("\n");
	}
	return 0;
}
