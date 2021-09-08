#include<stdio.h>

int main()
{
	int n, N, i, j, x, y, z, w, m, C;
	
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++){
		scanf("Number: %d\n", &N);
		for(j = 1; j <= 5; j++){
			x = N%10;
			y = N/10;
			z = y/10;
			w = z/10;
			m = w/10;
		}
	}
	C = x + m;
	printf("Number Count: %d\n", C);
	return 0;
}
