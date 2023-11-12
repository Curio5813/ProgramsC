#include <stdio.h>


int main(){

	int v[6], soma = 0, v_par[6], n_par = 0, v_impar[6], n_impar = 0;

	for(int i = 0; i < 6; i++){

		printf("Digite o %dº número: ", i + 1);
		scanf("%d", &v[i]);

	}for(int i = 0; i < 6; i++){

		if(v[i] % 2 == 0){

			v_par[n_par] = v[i];
			soma += v[i];
			n_par += 1;

		}else if(v[i] % 2 != 0){

			v_impar[n_impar] = v[i];
			n_impar += 1;

		}

	}printf("A soma dos números pares é %d e os numeros pares são:\n", soma);
	for(int i = 0; i < n_par; i++){

		printf("%d ", v_par[i]);

	}printf("\n");
	printf("A quantidade dos números ímpares é de %d e os numeros ímpares são:\n", n_impar);
	for(int i = 0; i < n_impar; i++){

		printf("%d ", v_impar[i]);

	}

	return 0;

}
