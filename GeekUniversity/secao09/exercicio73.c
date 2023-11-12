#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int media_idade(int* v1, char* v2, char* v3, char* v4){

	double media = 0;

	int idades = 0, i = 0, qt = 0;

	for(i = 0; i < 5; i++){
		if(v3[i] == 'C' && v4[i] == 'P'){
			idades += v1[i];
			qt += 1;

		}

	}if(qt == 0){
		media = 0;

	}else if(qt > 0){

		media = idades / qt;
	}
	printf("A média de idade das pessoas com olhos castanhos e cabelos pretos é de %.1lf", media);
	printf("\n");

}


int maior_idade(int* v1, char* v2, char* v3, char* v4){

	int maior = 0, i = 0;

	for(i = 0; i < 5; i++){
		if(v1[i] > maior){
			maior = v1[i];
		}

	}printf("A pessoa de maior idade tem %d anos", maior);
	printf("\n");

}


int sexo_feminino(int* v1, char* v2, char* v3, char* v4){

	int qt = 0, i = 0;

	for(i = 0; i < 5; i++){
		if(18 <= v1[i] && v1[i] <= 35 && v2[i] == 'F' && v3[i] == 'A' && v4[i] == 'L'){
			qt += 1;

		}

	}printf("A quantidade de mulheres com idade entre 18 à 35 anos, olhos azuis e cabelos louros é de %d", qt);
	printf("\n");

}


int main(){

	int v1[5];
	char v2[50], v3[50], v4[50];

	for(int i = 0; i < 5; i++){
		printf("Idade: ");
		scanf("%d", &v1[i]);
		printf("Sexo [M] => Masculino, [F] => Feminino: ");
		scanf("%s", &v2[i]);
		printf("Cor dos olhos [A] => Azuis, [C] => Castanhos: ");
		scanf("%s", &v3[i]);
		printf("Cor dos cabelos [L] => Louros, [P] => Pretos, [C] => Castanhos: ");
		scanf("%s", &v4[i]);
		printf("\n");

	}printf("\n");

	media_idade(v1, v2, v3, v4);

	maior_idade(v1, v2, v3, v4);

	sexo_feminino(v1, v2, v3, v4);

	return 0;

}
