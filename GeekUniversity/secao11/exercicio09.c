#include <stdio.h>
#include <stdlib.h>


int main(){

	FILE *arq1; FILE *arq2; FILE *arq3; char doc[20], c;


	printf("Qual o nome do documento? ");
	scanf("%s", &doc);
	printf("\n");

	arq1 = fopen("texto09_01.txt", "r");
	arq2 = fopen("texto09_02.txt", "r");

	arq3 = fopen(doc, "w");
	if(arq3){
		c = fgetc(arq1);
		while(c != EOF){
			fputc(c, arq3);
			c = fgetc(arq1);
		}c = fgetc(arq2);
		while(c != EOF){
			fputc(c, arq3);
			c = fgetc(arq2);
		}

	}else{
		printf("Documento não encontrado!");

	}

	printf("O nome do documento é %s", doc);

	fclose(arq1);
	fclose(arq2);
	fclose(arq3);

	return 0;

}
