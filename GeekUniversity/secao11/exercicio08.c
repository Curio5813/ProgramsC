#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

	FILE *arq1; FILE *arq2; char nome1[20], nome2[20], palavras[30]; int c;

	printf("Quais os nomes para os arquivos: ");
	scanf("%s%s", &nome1, &nome2);
	printf("\n");

	arq1 = fopen(nome1, "w");

	if(arq1){
		printf("Escreva no Documento: \n");
		while(palavras[0] != '0'){
			fputs(palavras, arq1);
			fgets(palavras, 30, stdin);
		}

	}else{
		printf("Arquivo não encontrado!");

	}fclose(arq1);

	arq1 = fopen(nome1, "r");
	arq2 = fopen(nome2, "w");

	printf("\n");
	if(arq2){
		printf("Alterações no documento %s", nome1);
		c = fgetc(arq1);
		while(c != EOF){
			fputc(toupper(c), arq2);
			c = fgetc(arq1);

		}

	}else{
		printf("Arquivo não encontrado!");

	}fclose(arq1);
	fclose(arq2);


	return 0;

}

