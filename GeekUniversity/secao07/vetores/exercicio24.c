#include <stdio.h>


int main(){

	int aluno[10], num1, num2;
	float altura[10], maior = 0, menor = 999999999999;

	for(int i = 0; i < 10; i++){

		printf("Qual a altura do %dº aluno: ", i + 1);
		scanf("%f", &altura[i]);

		if(altura[i] > maior){

			maior = altura[i];
			num1 = i + 1;

		}if(altura[i] < menor){

			menor = altura[i];
			num2 = i + 1;

		}

	}printf("O número do aluno mais alto é %d, com altura é de %.2f\n", num1, maior);
	printf("O número do aluno mais baixo é %d, com altura é de %.2f\n", num2, menor);

	return 0;

}

