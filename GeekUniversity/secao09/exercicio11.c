#include <stdio.h>


double notas[3], med_art, med_pod;

char op[1];


double medias(){

	for(int i = 0; i < 3; i++){
		printf("Qual a %dº nota do aluno: ", i + 1);
		scanf("%lf", &notas[i]);

	}printf("\n");
	printf("Digite uma opção:\n"
			"[A] => Média Aritmética;\n"
			"[P] => Média Ponderada\n"
			"Digite Opção: ");
	scanf("%s", &op[0]);

	if(op[0] == 'A'){

		med_art = (notas[0] + notas[1] + notas[2]) / 3.0;
		printf("A média do aluno foi %.2lf", med_art);

	}else if(op[0] == 'P'){

		med_pod = (notas[0] * 5 + notas[1] * 3 + notas[2] * 2) / 10.0;
		printf("A média do aluno foi %.2lf", med_pod);
	}

}


int main(){

	medias();

	return 0;

}
