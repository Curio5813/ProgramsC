#include <stdio.h>
#include <stdlib.h>


int main(){

	int n;

	while((scanf("%d", &n) != EOF)){
		int cont = 1, soma = 0, unissono;

		int *notas = (int*)malloc(n * sizeof(int));

		for(int i = 0; i < n; i++){
			scanf("%d", &notas[i]);
		}
		int k = 0, j = n - 1;
		for(int i = 0; i < n; i++){
			soma += notas[i];
		}
		unissono = soma / n;
		if(soma % n == 0){
			while(j >= k){
				if(notas[j] == unissono){
					j -= 1;
				}
				if(notas[k] == unissono){
					k += 1;
				}
				else{
					notas[k] += 1;
					notas[j] -= 1;
					cont += 1;
				}

			}
			printf("%d\n", cont);
			free(notas);
			notas = NULL;
		}
		else{
			printf("%d\n", -1);

		}
	}

	return 0;
}
