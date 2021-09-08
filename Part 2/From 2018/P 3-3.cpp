#include<stdio.h>

int main()
{
	FILE *fp;
	char filename[] = "my_first.txt";
	
	fp = fopen(filename, "w");
	fprintf(fp, "This is a file created by my program! ");
	fprintf(fp, " HI BRO. KI KHOBOR? \n"); 
	fclose(fp);
	
	fp = fopen(filename, "a");
	fprintf(fp, " Second line. \n"); 
	fclose(fp);	

	return 0;
}
