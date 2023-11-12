#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void comparacao_string(){

	char str1[50], str2[50];

	int tam1, tam2, cont = 0;

	printf("Digite a primeira string: ");
	scanf("%s", &str1);
	printf("Digite a segunda string: ");
	scanf("%s", &str2);
	printf("\n");

	tam1 = strlen(str1);
	tam2 = strlen(str2);

	if(tam1 != tam2){

		printf("As strings são diferentes.");

	}else{

		for(int i = 0; i < tam1; i++){
			if(str1[i] == str2[i]){
				cont += 1;

			}

		}if(cont == tam1){
			printf("As strings são iguais.");

		}else{
			printf("As strings são diferentes.");

		}

	}

}


int main(){

	comparacao_string();

	return 0;

}
