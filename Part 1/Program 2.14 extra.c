#include<stdio.h>
int main()
{
    int num1, num2;

    printf("Enter a number: ");

    scanf("%d", &num1);

    printf("Enter a number: ");

    scanf("%d", &num2);

    char add = '+';
    char subtract = '-';

    printf("%d %c  %d = %d\n", num1, add, num2, num1 + num2);

    printf("%d %c  %d = %d", num1, subtract, num2, num1 - num2);
    return 0;
}
