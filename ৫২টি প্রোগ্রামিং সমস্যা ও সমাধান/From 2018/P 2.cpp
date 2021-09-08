#include<stdio.h>
int main()
{
    int T, i;
    char n[101];

    scanf("%d", &T);

    for(i = 1; i <= T; i++)
    {

        scanf("%s", &n);

        if ((n/2)*2 == n)
        {
            printf("Even");
        }

        else
        {
            printf("Odd");
        }
    }

    return 0;
}
