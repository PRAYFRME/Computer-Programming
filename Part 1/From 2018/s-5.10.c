#include <stdio.h>
int main()
{
int a, b, t, x,lcm, gcd;
scanf("%d %d", &a, &b);
x=a*b;
printf(" X is %d\n",x);
if (a == 0) gcd = a;
else if (b == 0) gcd = b;
else {
while (b != 0) {
t = b;
b = a % b;
a = t;
}
gcd = a;
}
printf(" GCD is %d\n", gcd);
lcm=(x/gcd);
printf(" LCM is %d\n",lcm);
return 0;
}
