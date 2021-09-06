#include<stdio.h>
int main()
{
    int a,b,c,d,num1,num2;
    printf("please enter a number: ");
    scanf("%d",&num1);
    printf("please enter another number: ");
    scanf("%d",&num2);
    a=num1+num2;
    printf("%d + %d = %d\n",num1,num2,a);
    b=num1-num2;
    printf("%d - %d = %d\n",num1,num2,b);
    c=num1*num2;
    printf("%d * %d = %d\n",num1,num2,c);
    d=num1/num2;
    printf("%d / %d = %d\n",num1,num2,d);
    return 0;
}
