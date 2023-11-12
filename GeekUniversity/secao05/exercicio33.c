#include <stdio.h>


int main(){

	int k = 0, cont = 0, n, i, j;

	printf("Digite 3 números inteiros possitivos: ");
	scanf("%d %d %d", &n, &i, &j);

	while(cont < n){

		if(k % i == 0 || k % j == 0){

			printf("%d ", k);
			cont += 1;

		}k += 1;

	}

	return 0;

}
