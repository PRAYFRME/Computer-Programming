#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp = fopen("in.txt", "r");
	if(fp == NULL){
		perror("Can't open file");
		return EXIT_FAILURE;
	}
	
	int ch;
	
	ch = fgets(fp);
	printf("%c\n", (char)ch);
	ch = fgets(fp);
	printf("%c\n", (char)ch);
	
	fseek(fp, 0, 0);
	ch = fgetc(fp);
	printf("%c\n",(char)ch);
	
	fclode(fp);
	
	return 0;
}
