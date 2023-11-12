#include <stdio.h>


void pares_e_impares(){

	int x[10], a[10], b[10], k = 0;

	for(int i = 0; i < 10; i++){
		printf("Digite o %2dº numero inteiro: ", i + 1);
		scanf("%d", &x[i]);
		if(x[i] % 2 == 0){
			a[i] = x[i];
			b[i] = NULL;

		}else if(x[i] % 2 != 0){
			b[i] = x[i];
			a[i] = NULL;

		}

	}while(k < 10){
		if(a[k] == 0){
		k += 1;

		}else{
			printf("%d ", a[k]);
			k += 1;
		}

	}k = 0;
	printf("\n");
	while(k < 10){
		if(b[k] == 0){
		k += 1;

		}else{
			printf("%d ", b[k]);
			k += 1;
		}
	}

}


int main(){

	pares_e_impares();

	return 0;

}
