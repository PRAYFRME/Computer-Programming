#include<stdio.h>
int main()
{
    int i, n, m;

    char c = '=';

    for (n = 1; n <= 20; n++){

            printf("\n");
            m = 0;

        for(i = 1; i <= 10; i++){

            m = m + n;
            printf("%d X %d %c %d\n", n, i, c, m);
        }
    }
    return 0;
}
