#include <stdio.h>
#include <stdlib.h>


int main(){

	FILE *arq1; FILE *arq2; int c; char vogal[10] = "aeiouAEIOU";

	arq2 = fopen("texto07_alt.txt", "w");

	if(arq1){
		arq1 = fopen("texto07.txt", "r");
		c = fgetc(arq1);
		while(c != EOF){
			if(c == 'a' || c == 'A'){
				c = '*';
				fputc(c, arq2);
			}else if(c == 'e' || c == 'E'){
				c = '*';
				fputc(c, arq2);

			}else if(c == 'i' || c == 'I'){
				c = '*';
				fputc(c, arq2);

			}else if(c == 'o' || c == 'O'){
				c = '*';
				fputc(c, arq2);

			}else if(c == 'u' || c == 'U'){
				c = '*';
				fputc(c, arq2);

			}else{
				fputc(c, arq2);

			}c = fgetc(arq1);

		}

	}else{
		printf("Arquivo não encontrado!");

	}
	fclose(arq1);
	fclose(arq2);

	return 0;

}
