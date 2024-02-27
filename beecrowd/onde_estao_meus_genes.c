#include <stdio.h>
#include <stdlib.h>


int main(){

	int cont = 1, k = 0, i, j, t, m = 0, temp, buscas, busca, qtd_genes, inversoes;
	int *genes, *resultado, *genes_temp;

	scanf("%d", &qtd_genes);

	while(qtd_genes != 0){

		genes = (int*)malloc(qtd_genes * sizeof(int));
		genes_temp = (int*)malloc(qtd_genes * sizeof(int));

		for(k = 0; k < qtd_genes; k++){
			genes[k] = k + 1;

		}
		k = 0;
		scanf("%d", &inversoes);
		for(t = 0; t < inversoes; t++){
			scanf("%d %d", &i, &j);
			i -= 1;
			temp = 0;
			while(k < qtd_genes){
				if(k < i){
					while(k < i){
						temp += 1;
						genes[k] = temp;
						k += 1;
					}
				}
				if(k >= i){
					temp = j;
					for(int l = 0; l < qtd_genes; l++){
						genes_temp[l] = genes[l];
					}
					while(k < j){
						temp -= 1;
						genes_temp[k] = genes[temp];
						k += 1;
					}
				}
				for(int l = 0; l < qtd_genes; l++){
					genes[l] = genes_temp[l];
				}
				if(k >= j){
					while(k < qtd_genes){
						j += 1;
						genes[k] = j;
						k += 1;
					}
				}
			}
			k = 0;
		}
		scanf("%d", &buscas);

		resultado = (int*)malloc(buscas * sizeof(int));

		for(k = 0; k < buscas; k++){
			scanf("%d", &busca);
			for(int l = 0; l < qtd_genes; l++){
				if(genes[l] == busca){
					resultado[k] = l + 1;
					break;
				}
			}
		}
		printf("Genome %d\n", cont);
		for(k = 0; k < buscas; k++){
			printf("%d\n", resultado[k]);
		}
		cont += 1;

		free(genes);
		genes = NULL;
		free(genes_temp);
		genes = NULL;
		free(resultado);
		resultado = NULL;

		scanf("%d", &qtd_genes);
	}

	return 0;
}
