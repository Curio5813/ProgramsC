#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

	FILE *arq; int c, soma = 0, vet[26];
	char alf[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for(int i = 0; i < 26; i++){
		arq = fopen("texto06.txt", "r");
		if(arq){
			c = fgetc(arq);
			while(c != EOF){
				if(c == alf[i] || c == alf[i + 26]){
					soma += 1;
				}c = fgetc(arq);

			}vet[i] = soma;
				soma = 0;

		}else{
			printf("Arquivo não encontrado!");

			return 0;
		}

	}for(int i = 0; i < 26; i++){
		printf("A letra %c apareceu %d vezes;\n", alf[i], vet[i]);

	}fclose(arq);

	return 0;

}
