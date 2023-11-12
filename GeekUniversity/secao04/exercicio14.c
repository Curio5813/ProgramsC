#include <stdio.h>


int main(){

	float lab, avs, exmf, media;

	printf("Digite a nota do trabalho de laboratório: ");
	scanf("%f", &lab);
	printf("Digite a nota do exame semestral: ");
	scanf("%f", &avs);
	printf("Digite a nota do exame final: ");
	scanf("%f", &exmf);

	media = lab + avs + exmf;

	if(media < 3){

		printf("A média do aluno foi %.1f. O aluno foi reprovado", media);

	}else if(media >= 3 && media < 5){

		printf("A média do aluno foi %.1f. O aluno está em recuperação", media);

	}else if(media >= 5){

		printf("A média do aluno foi de %.1f. O aluno foi aprovado", media);

	}


	return 0;


}
