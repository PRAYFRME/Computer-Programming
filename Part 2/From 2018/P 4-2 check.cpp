#include<stdio.h>

int x=1;

void myfnc(int y,int z) //eikhane y likha bole kono error dekhay na. kintu niche z er kotha ekihane likha o nai, global ey o likha nai.
{
	y=y*2;
	x=x+10;
	z=50;
	printf("myfnc,x = %d,y = %d,z=%d\n",x,y);
}

int main()
{
	int y = 5,z=30;
	x = 10; // EIKHANE "INT" LEKHA NAI. GLOBAL VERIABLE BOLE.KINTU Y ER AGE "INT" THIK E LIKHA ACHE.

	myfnc(y,z);

	printf("main,x = %d, y = %d,z = %d\n",x,y,z);

	return 0;
}
