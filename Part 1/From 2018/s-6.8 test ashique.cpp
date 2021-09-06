#include<stdio.h>
int main()
{
	int i,c=0,m,tm[]={10,20,30,40,50,60,70,80,20,30,50,80,10,80,90,80,5,9,15,99};
	printf("Enter the marks \n");
	scanf("%d",&m);
	for(i=0;i<20;i++){
		if(tm[i]==m){
			c++;
		}
	}
	printf("Got %d: %d\n",m,c);
	return 0;
}
