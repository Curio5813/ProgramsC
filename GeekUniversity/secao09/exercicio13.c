#include <stdio.h>


int num1, num2, soma, subtracao, multiplicacao;

double divisao;

char op[1];

int operacoes_aritmetica(){

	printf("Digite o primeiro e o segundo número: ");
	scanf("%d%d", &num1, &num2);

	printf("\n");
	printf("Digite uma opção:\n"
			"[+] => Soma;\n"
			"[-] => Subtração\n"
			"[*] => Multiplicação\n"
			"[/] => Divisão;"
			"Qual opção deseja: ");
	scanf("%s", &op[0]);
	printf("\n");

	if(op[0] == '+'){

		soma = num1 + num2;
		printf("A soma de %d por %d é %d", num1, num2, soma);

	}else if(op[0] == '-'){

		subtracao = num1 - num2;
		printf("A subtração de %d por %d é %d", num1, num2, subtracao);

	}else if(op[0] == '*'){

		multiplicacao = num1 * num2;
		printf("A multiplicacão de %d por %d é %d", num1, num2, multiplicacao);

	}else if(op[0] == '/'){

		divisao = (double) num1 / (double) num2;
		printf("A divisão de %d por %d é %.2lf", num1, num2, divisao);

	}

}


int main(){

	operacoes_aritmetica();

	return 0;

}
