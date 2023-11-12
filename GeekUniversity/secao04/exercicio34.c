#include <stdio.h>



int main(){

	double nota;
	int faltas;

	printf("Qual a nota do aluno e seu número de faltas? ");
	scanf("%lf %d", &nota, &faltas);

	if(9 <= nota && nota <= 10 && faltas <= 20){

		printf("O aluno tirou Conceito A.");

	}else if(9 <= nota && nota <= 10 && faltas > 20){

		printf("O aluno tirou Conceito B.");

	}else if(7.5 <= nota && nota <= 8.9 && faltas <= 20){

		printf("O aluno tirou Conceito B.");

	}else if(7.5 <= nota && nota <= 8.9 && faltas > 20){

		printf("O aluno tirou Conceito C.");

	}else if(5.0 <= nota && nota <= 7.4 && faltas <= 20){

		printf("O aluno tirou Conceito C.");

	}else if(5.0 <= nota && nota <= 7.4 && faltas > 20){

		printf("O aluno tirou Conceito D.");

	}else if(4.0 <= nota && nota <= 4.9 && faltas <= 20){

		printf("O aluno tirou Conceito D.");

	}else if(4.0 <= nota && nota <= 4.9 && faltas > 20){

		printf("O aluno tirou Conceito E.");

	}else if(0.0 <= nota && nota <= 3.9){

		printf("O aluno tirou Conceito E.");

	}

	return 0;

}
