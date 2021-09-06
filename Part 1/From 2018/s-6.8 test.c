#include<stdio.h>
int main()
{
    int i,m,c=0,tm[]={10,20,30,40,50,60,70,80,20,30,50,80,10,80,90,80,5,9,15,99};
    scanf("%d",&m);
    for(i=0;i<19;i++){
        if(tm[i]==m){
            c++;
        }
        }
        printf("Student get it: %d",c);
    return 0;
}


