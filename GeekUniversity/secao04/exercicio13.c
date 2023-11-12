#include <stdio.h>


int main(){

	float n1, n2, n3, media;

	printf("Digite as notas que o aluno tirou no ano letivo? ");
	scanf("%f%f%f", &n1, &n2, &n3);

	media = (n1 + n2 + n3 * 2) / 4;

	if(media >= 60){

		printf("A média do aluno é igual a %.2f\n", media);
		printf("Aluno aprovado");

	}else if(media < 60){

		printf("A média do aluno é igual a %.2f\n", media);
		printf("Aluno reprovado");

	}


	return 0;

}
