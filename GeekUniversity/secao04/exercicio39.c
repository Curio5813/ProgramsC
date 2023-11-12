#include <stdio.h>



int main(){

	int tempo_servico;
	double salario, reajuste, bonus;

	printf("Salário atual do funcionário: R$ ");
	scanf("%lf", &salario);
	printf("Tempo de serviço do funcionário: ");
	scanf("%d", &tempo_servico);

	if(salario <= 500){

		reajuste = salario * 1.25;

		if(tempo_servico < 1){

			printf("O salário reajustado é de R$%.2lf", reajuste);

		}else if(1 <= tempo_servico && tempo_servico <= 3){

			reajuste = salario * 1.25 + 100;
			printf("O salário reajustado é de R$%.2lf", reajuste);

		}else if(4 <= tempo_servico && tempo_servico <= 6){

			reajuste = salario * 1.25 + 200;
			printf("O salário reajustado é de R$%.2lf", reajuste);

		}else if(7 <= tempo_servico && tempo_servico <= 10){

			reajuste = salario * 1.25 + 300;
			printf("O salário reajustado é de R$%.2lf", reajuste);

		}else if(tempo_servico > 10){

			reajuste = salario * 1.25 + 500;
			printf("O salário reajustado é de R$%.2lf", reajuste);

		}

	}else if(500 < salario && salario <= 1000){

		reajuste = salario * 1.20;

		if(tempo_servico < 1){

			printf("O salário reajustado é de R$%.2lf", reajuste);

		}else if(1 <= tempo_servico && tempo_servico <= 3){

			reajuste = salario * 1.20 + 100;
			printf("O salário reajustado é de R$%.2lf", reajuste);

		}else if(4 <= tempo_servico && tempo_servico <= 6){

			reajuste = salario * 1.20 + 200;
			printf("O salário reajustado é de R$%.2lf", reajuste);

		}else if(7 <= tempo_servico && tempo_servico <= 10){

			reajuste = salario * 1.20 + 300;
			printf("O salário reajustado é de R$%.2lf", reajuste);

		}else if(tempo_servico > 10){

			reajuste = salario * 1.20 + 500;
			printf("O salário reajustado é de R$%.2lf", reajuste);

		}

	}else if(1000 < salario && salario <= 1500){

		reajuste = salario * 1.15;

		if(tempo_servico < 1){

			printf("O salário reajustado é de R$%.2lf", reajuste);

		}else if(1 <= tempo_servico && tempo_servico <= 3){

			reajuste = salario * 1.15 + 100;
			printf("O salário reajustado é de R$%.2lf", reajuste);

		}else if(4 <= tempo_servico && tempo_servico <= 6){

			reajuste = salario * 1.15 + 200;
			printf("O salário reajustado é de R$%.2lf", reajuste);

		}else if(7 <= tempo_servico && tempo_servico <= 10){

			reajuste = salario * 1.15 + 300;
			printf("O salário reajustado é de R$%.2lf", reajuste);

		}else if(tempo_servico > 10){

			reajuste = salario * 1.15 + 500;
			printf("O salário reajustado é de R$%.2lf", reajuste);

		}


	}else if(1500 < salario && salario <= 2000){

		reajuste = salario * 1.10;

		if(tempo_servico < 1){

			printf("O salário reajustado é de R$%.2lf", reajuste);

		}else if(1 <= tempo_servico && tempo_servico <= 3){

			reajuste = salario * 1.10 + 100;
			printf("O salário reajustado é de R$%.2lf", reajuste);

		}else if(4 <= tempo_servico && tempo_servico <= 6){

			reajuste = salario * 1.10 + 200;
			printf("O salário reajustado é de R$%.2lf", reajuste);

		}else if(7 <= tempo_servico && tempo_servico <= 10){

			reajuste = salario * 1.10 + 300;
			printf("O salário reajustado é de R$%.2lf", reajuste);

		}else if(tempo_servico > 10){

			reajuste = salario * 1.10 + 500;
			printf("O salário reajustado é de R$%.2lf", reajuste);

		}

	}else if(salario > 2000){

		reajuste = salario;

		if(tempo_servico < 1){

			printf("Sem reajustado e bonificação.");

		}else if(1 <= tempo_servico && tempo_servico <= 3){

			reajuste = salario + 100;
			printf("O salário reajustado é de R$%.2lf", reajuste);

		}else if(4 <= tempo_servico && tempo_servico <= 6){

			reajuste = salario + 200;
			printf("O salário reajustado é de R$%.2lf", reajuste);

		}else if(7 <= tempo_servico && tempo_servico <= 10){

			reajuste = salario + 300;
			printf("O salário reajustado é de R$%.2lf", reajuste);

		}else if(tempo_servico > 10){

			reajuste = salario + 500;
			printf("O salário reajustado é de R$%.2lf", reajuste);

		}

	}

}
