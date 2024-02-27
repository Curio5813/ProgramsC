#include <stdio.h>


int main(){

	long long int num, i, cont, n;

	scanf("%lld", &n);
	for(int k = 0; k < n; k++){
		cont = 0;
		scanf("%lld", &num);
		if(num == 1){
			printf("Prime\n");
		}
		for(i = 2; i * i <= num; i++){
			if(num % i == 0){
				printf("Not Prime\n");
				cont = 1;
				break;
			}

		}
		if(cont == 0){
			printf("Prime\n");
		}
	}
	return 0;
}
