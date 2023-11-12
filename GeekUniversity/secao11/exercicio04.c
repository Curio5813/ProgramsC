#include <stdio.h>
#include <stdlib.h>


int main(){

	FILE *arq; int c, consoante = 0, vogal = 0, bol = 0;

	char vogais[10] = "aeiouAEIOU",
			consoantes[32] = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";

	arq = fopen("texto04.txt", "r");

	if(arq){
		c = fgetc(arq);
		while(c != EOF){
			for(int i = 0; i < 32; i++){
				if(c == vogais[i]){
					vogal += 1;
					break;

				}else if(c == consoantes[i]){
					consoante += 1;
					break;
				}

			}c = fgetc(arq);

		}printf("O texto tem %d vogais e %d consoantes", vogal, consoante);

	}else{

		printf("Arquivo não encontrado!");

	}fclose(arq);

	return 0;

}
