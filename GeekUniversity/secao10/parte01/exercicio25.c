#include <stdio.h>
#include <stdlib.h>


void notas(float *nota1, float *nota2, float *media_artm, float *media_pond){

	printf("Qual a primeira nota: ");
	scanf("%f", nota1);
	printf("Qual a segunda nota: ");
	scanf("%f", nota2);
	printf("\n");

	*(media_artm) = (*(nota1) + *(nota2)) / 2.0;

	*(media_pond) = (*(nota1) + *(nota2) * 2) / 3.0;


}


int main(){

	float nota1, nota2, media_artm, media_pond;

	notas(&nota1, &nota2, &media_artm, &media_pond);
	printf("\n");

	printf("A média aritmética do aluno foi %.1f\n", media_artm);
	printf("A média ponderada do aluno foi %.1f\n", media_pond);

	return 0;

}
