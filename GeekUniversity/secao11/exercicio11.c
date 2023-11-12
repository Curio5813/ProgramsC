#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

	FILE *arq;
	int cont = 0, qt = 0; char nome[30], palavra[30], texto[1000][1000], ch;

	printf("Qual o nome do arquivo: ");
	scanf("%s", &nome);
	printf("Qual a palavra deseja encontrar no texto: ");
	scanf("%s", &palavra);
	printf("\n");

	arq = fopen(nome, "r");

	if(arq){
		while(fscanf(arq, "%s", texto[cont]) != EOF && fscanf(arq,"%c", &ch)!= EOF){
			if(strcmp(texto[cont], palavra) == 0){
				qt += 1;

			}else{
				 cont += 1;
			 }

		 }printf("A palavra '%s' foi encontrada %d vezes no texto .\n\n", palavra, qt);

	}else{

		printf("Arquivo não encontrado!");

	}

	fclose(arq);

	return 0;

}
