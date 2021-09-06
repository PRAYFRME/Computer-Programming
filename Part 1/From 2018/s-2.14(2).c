#include<stdio.h>
int main()
{
    double a,b,c,d,num1,num2;
    printf("please enter a number: ");
    scanf("%lf",&num1);
    printf("please enter another number: ");
    scanf("%lf",&num2);
    a=num1+num2;
    printf("%lf + %lf = %lf\n",num1,num2,a);
    b=num1-num2;
    printf("%lf - %lf = %lf\n",num1,num2,b);
    c=num1*num2;
    printf("%lf * %lf = %lf\n",num1,num2,c);
    d=num1/num2;
    printf("%lf / %lf = %lf\n",num1,num2,d);
    return 0;
}

