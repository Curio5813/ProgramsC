#include <stdio.h>


int main(){

	char aluno[3][10], g[10] = {'b', 'b', 'd', 'b', 'c', 'c', 'a', 'a', 'a', 'd'}, d[3];
	int notas[3], matricula[3], nota = 0;

	for(int i = 0; i < 3; i++){

		printf("Número de matrícula do %dº aluno: ", i + 1);
		scanf("%d", &matricula[i]);

		for(int k = 0; k < 10; k++){

			printf("Resposta do %dº aluno para %2dº questão: ", i + 1, k + 1);
			scanf("%s", &aluno[i][k]);

		}printf("\n");

	}for(int i = 0; i < 3; i++){

		for(int k = 0; k < 10; k++){

			if(aluno[i][k] == g[k]){

				nota += 1;

			}

		}notas[i] = nota;
		nota = 0;

	}for(int i = 0; i < 3; i++){

		printf("O %dº aluno de matrícula %2d teve:\n", i + 1, matricula[i]);
		printf("Média: %2d\n", notas[i]);

		if(notas[i] >= 7){

			printf("Situação: Aprovado");
			printf("\n");

		}else if(notas[i] < 7){

			printf("Situação: Reprovado");
			printf("\n");

		}printf("\n");

	}

	return 0;

}
