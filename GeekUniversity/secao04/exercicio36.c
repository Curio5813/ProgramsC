#include <stdio.h>



int main(){

	double vendas, comissao;

	printf("Qual o valor das vendas no mês? ");
	scanf("%lf", &vendas);


	if(vendas >= 100000.00){

		comissao = 700 + vendas * 0.16;
		printf("A comissão do vendedor é de R$ %.2lf", comissao);

	}else if(80000 <= vendas && vendas < 100000){

		comissao= 650 + vendas * 0.14;
		printf("A comissão do vendedor é de R$ %.2lf", comissao);

	}else if(60000 <= vendas && vendas < 80000){

		comissao= 600 + vendas * 0.14;
		printf("A comissão do vendedor é de R$ %.2lf", comissao);

	}else if(40000 <= vendas && vendas < 60000){

		comissao= 550 + vendas * 0.14;
		printf("A comissão do vendedor é de R$ %.2lf", comissao);

	}else if(20000 <= vendas && vendas < 40000){

		comissao= 500 + vendas * 0.14;
		printf("A comissão do vendedor é de R$ %.2lf", comissao);

	}else if(vendas < 20000){

		comissao= 400 + vendas * 0.14;
		printf("A comissão do vendedor é de R$ %.2lf", comissao);

	}

	return 0;

}
