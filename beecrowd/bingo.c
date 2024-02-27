#include <stdio.h>
#include <stdlib.h>


int main(){

	int n, b, *bolas, *numeros, *dif_bolas, diff, pos = 0, cont = 0, resposta = 1;

	scanf("%d %d", &n, &b);
	while((n != 0 && b != 0)){

		bolas = (int*)malloc(b * sizeof(int));
		numeros = (int*)malloc((n + 1) * sizeof(int));
		dif_bolas = (int*)malloc((b * b) * sizeof(int));

		printf("");
		for(int i = 0; i < b; i++){
			scanf("%d", &bolas[i]);
		}
		for(int i = 0; i < n + 1; i++){
			numeros[i] = i;
		}
		for(int i = 0; i < b; i++){
			for(int k = 0; k < b; k++){
				diff = abs(bolas[i] - bolas[k]);
				dif_bolas[pos] = diff;
				pos += 1;
			}
		}
		for(int i = 0; i < (n + 1); i++){
			for(int k = 0; k < pos; k++){
				if(numeros[i] == dif_bolas[k]){
					cont = 1;
				}

			}if(cont == 0){
				printf("N\n");
				resposta = 0;
				break;
			}
			else if(cont == 1){
				cont = 0;
			}

		}if(cont == 0 && resposta == 1){
			printf("Y\n");
		}

		free(bolas);
		bolas = NULL;
		free(numeros);
		numeros = NULL;
		free(dif_bolas);
		dif_bolas = NULL;
		cont = 0;
		pos = 0;
		resposta = 1;

		scanf("%d %d", &n, &b);
	}

	return 0;
}
