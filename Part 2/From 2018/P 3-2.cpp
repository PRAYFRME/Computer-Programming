#include<stdio.h>

int main()
{
	FILE *fp;
	char filename[] = "my_first.txt";
	fp = fopen(filename, "w");
	
	fprintf(fp, "This is a file created by my program! ");
	fprintf(fp, " HI BRO. KI KHOBOR? \n"); 
	fclose(fp);
	fprintf(fp, " Second line. \n"); 
	
	return 0;
}
