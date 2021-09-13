#include<stdio.h>
int main()
{
    int n = 5, i = 1;
    char c = '=';
    for ( ; ; ){
        printf("%d X %d %c %d\n", n, i, c, n*i);
        i += 1;
        if(i > 10){
            break;
        }
    }
    return 0;
}
