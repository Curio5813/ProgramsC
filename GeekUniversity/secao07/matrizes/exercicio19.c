#include <stdio.h>


int main(){

	int m[5][4], matricula;
	double med_geral = 0, nota_final = 0, maior = 0, soma = 0;

	for(int i = 0; i < 5; i++){

		for(int k = 0; k < 4; k++){

			if(k == 0){

				printf("Digite a matrícula do %dº aluno: ", i + 1);
				scanf("%d", &m[i][k]);

			}else if(k == 1){

				printf("Digite a média das provas do %dº aluno: ", i + 1);
				scanf("%d", &m[i][k]);

			}else if(k == 2){

				printf("Digite a média dos trabalhos do %dº aluno: ", i + 1);
				scanf("%d", &m[i][k]);

			}else if(k == 3){

				nota_final = (m[i][1] + m[i][2]) / 2.0;

				if(nota_final > maior){

					maior = nota_final;
					matricula = m[i][0];

				}soma += nota_final;

			}

		}printf("\n");

	}printf("O aluno que teve a maior nota final tem a matrícula: %d", matricula);

	med_geral = soma / 5.0;

	printf("\n\n");
	printf("A média das notas finais de todos os alunos foi igula a: %.1lf ", med_geral);

	return 0;

}
