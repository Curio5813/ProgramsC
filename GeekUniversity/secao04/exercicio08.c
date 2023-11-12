#include <stdio.h>


int main(){

	float nota1, nota2, media;

	printf("Digite as duas notas tiradas pelo aluno: ");
	scanf("%f %f", &nota1, &nota2);

	if(0 > nota1 || nota1 > 10 || 0 > nota2 || nota2 > 10){

		printf("Notas inválidas!");

	}else if(0 <= nota1 <= 10 && 0 <= nota2 <= 10){

		media = (nota1 + nota2) / 2;
		printf("A média do aluno foi de: %.2f", media);

	}

}
