#include <stdio.h>


int main(){

	int a, b, aux1, aux2, v1[4], v2[4], soma[4], n1 = 0, n2 = 0, r1, r2;

	printf("Digite dois números menores que 10.000: ");
	scanf("%d %d", &a, &b);

	aux1 = a;
	aux2 = b;

	while(n1 < 4){

		r1 = a % 10;
		v1[n1] = r1;
		n1 += 1;
		a /= 10;

	}while(n2 < 4){

		r2 = b % 10;
		v2[n2] = r2;
		n2 += 1;
		b /= 10;


	}

	if(aux1 > aux2){

		for(int i = 0; i < n1; i++){

			soma[i] = v1[i] + v2[i];

		}for(int k = 0; k < n1; k++){

			if(soma[k] >= 0){

				printf("%d ", soma[k]);
			}

		}

	}else if(aux2 > aux1){

		for(int i = 0; i < n2; i++){

			soma[i] = v2[i] + v1[i];

		}for(int k = 0; k < n2; k++){

			if(soma[k] >= 0){

				printf("%d ", soma[k]);

			}

		}

	}

	return 0;

}
