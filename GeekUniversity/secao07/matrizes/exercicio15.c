#include <stdio.h>


int main(){


	char aluno[5][10], g[10] = {'a', 'b', 'b', 'c', 'd', 'a', 'd', 'a', 'b', 'c'};
	int res[5], nota = 0;

	for(int i = 0; i < 5; i++){

		for(int k = 0; k < 10; k++){

			printf("Marque uma alternativa das alternativas abaixo: Aluno %dº: ", i + 1);
			scanf("%s", &aluno[i][k]);

		}printf("\n");

	}for(int i = 0; i < 5; i++){

		for(int k = 0; k < 10; k++){

			if(aluno[i][k] == g[k]){

				nota += 1;

			}

		}res[i] = nota;
		nota = 0;

	}for(int i = 0; i < 5; i++){

		printf("A nota do %dº aluno foi: ", i + 1);
		printf("%d", res[i]);
		printf("\n");

	}

	return 0;

}
