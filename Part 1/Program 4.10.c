#include<stdio.h>
int main()
{
    int i, n;

    char c = '=';

    for (n = 1; n <= 20; n++){
            printf("\n");
        for(i = 1; i <= 10; i++){
            printf("%d X %d %c %d\n", n, i,c, n*i);
        }
    }
    return 0;
}
