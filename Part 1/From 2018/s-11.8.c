#include<stdio.h>
int main()
{
	int row,col,sum,array[5][5]={{6,4,7,8,9},{3,7,1,9,9},{8,6,4,2,7},{2,4,2,5,9},{4,1,6,7,3}};
	for(col=0;col<5;col++){
		sum=0;
		for(row=0;row<5;row++){
			sum=sum+array[row][col];
		}
		printf(" Sum of col %d: %d\n",(col+1),sum);
		printf("\n");
	}
	return 0;
}

