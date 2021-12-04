#include<stdio.h>
int test_fuction(int x)
{
    int y = x;
    x = 2 * y;
    return (x * y);
}
int main()
{
    int x = 10, y = 20, z = 30;
    z = test_fuction(x);

    printf("%d %d %d\n", x, y, z);
    return 0;
}
