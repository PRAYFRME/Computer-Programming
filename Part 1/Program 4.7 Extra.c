#include<stdio.h>
int main()
{
    int n = 5, i = 1;
    char c = '=';
    for (; i <= 10; i = i + 1){
        printf("%d X %d %c %d\n", n, i, c, n*i);
    }
    return 0;
}
