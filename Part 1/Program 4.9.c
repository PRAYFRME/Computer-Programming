#include<stdio.h>

int main()
{
    int i, m = 0, n = 5;

    char c = '=';

    for(i = 1; i <= 10; i++){
        m = m + n;
        printf("%d X %d %c %d\n", n, i,c, m);
    }
    return 0;
}
