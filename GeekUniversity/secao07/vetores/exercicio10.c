#include <stdio.h>


int main(){

	float arr[15], soma = 0, media;

	for(int i = 0; i < 15; i++){

		printf("Qual a nota do %dº aluno: ", i + 1);
		scanf("%f", &arr[i]);

	}for(int i = 0; i < 15; i++){

		soma += arr[i];

	}media = soma / 15.0;
	printf("A média geral da turma foi %.1f", media);

	return 0;

}
