#include <stdio.h>


int main(){

	int op;
	double soma, sub, mult, div, val1, val2;

	printf("Qual operação aritmética deseja realizar\n"
			"[1] => Soma\n"
			"[2] => Subtração\n"
			"[3] => Multiplicação\n"
			"[4] => Divisão\n"
			"Digite a opção desejada: ");
	scanf("%d", &op);

	if(op == 1){

		printf("Digite dois valores para somar: ");
		scanf("%lf %lf", &val1, &val2);

		soma = val1 + val2;

		printf("A soma de %.2lf com %.2lf é igual a: %.2lf", val1, val2, soma);

	}else if(op == 2){

		printf("Digite dois valores para subtrair: ");
		scanf("%lf %lf", &val1, &val2);

		sub = val1 - val2;

		printf("A subtração de %.2lf por %.2lf é igual a: %.2lf", val1, val2, sub);


	}else if(op == 3){

		printf("Digite dois valores para multiplicar: ");
		scanf("%lf %lf", &val1, &val2);

		mult = val1 * val2;

		printf("A multiplicação de %.2lf por %.2lf é igual a: %.2lf", val1, val2, mult);

	}else if(op == 4){

		printf("Digite dois valores para dividir: ");
		scanf("%lf %lf", &val1, &val2);

		div = val1 / val2;

		printf("A divisão de %.2lf por %.2lf é igual a: %.2lf", val1, val2, div);

	}

	return 0;

}
