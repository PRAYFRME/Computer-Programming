#include<stdio.h>
int main()
{
	int T, N, i, j, k;  // DEV-C++ ey vul output show kore -_- 

	scanf("%d", &T);

	for(i = 1; i <= T; i++){

		scanf("%d", &N);

		for(j = 1; j <= N; j++){
			for(k = 1; k <= j; k++){
					printf("*");
			}
			printf("\n");
		}
	}
	return 0;
}

