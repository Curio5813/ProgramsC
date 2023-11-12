#include <stdio.h>



int main(){

	int cod, qtd, op;
	float preco, soma;

	op = 1;
	soma = 0;

	while(op != 0){
		printf("Qual o código do seu pedido? ");
		scanf("%d", &cod);

		if(cod == 100){

			printf("Quantos deseja? ");
			scanf("%d", &qtd);

			preco = qtd * 1.20;
			soma += preco;

			printf("O valor do seu pedido é de R$%.2f\n", preco);

		}else if(cod == 101){

			printf("Quantos deseja? ");
			scanf("%d", &qtd);

			preco = qtd * 1.30;
			soma += preco;

			printf("O valor do seu pedido é de R$%.2f\n", preco);

		}else if(cod == 102){

			printf("Quantos deseja? ");
			scanf("%d", &qtd);

			preco = qtd * 1.50;
			soma += preco;

			printf("O valor do seu pedido é de R$%.2f\n", preco);

		}else if(cod == 103){

			printf("Quantos deseja? ");
			scanf("%d", &qtd);

			preco = qtd * 1.20;
			soma += preco;

			printf("O valor do seu pedido é de R$%.2f\n", preco);

		}else if(cod == 104){

			printf("Quantos deseja? ");
			scanf("%d", &qtd);

			preco = qtd * 1.70;
			soma += preco;

			printf("O valor do seu pedido é de R$%.2f\n", preco);


		}else if(cod == 105){

			printf("Quantos deseja? ");
			scanf("%d", &qtd);

			preco = qtd * 2.20;
			soma += preco;

			printf("O valor do seu pedido é de R$%.2f\n", preco);


		}else if(cod == 106){

			printf("Quantos deseja? ");
			scanf("%d", &qtd);

			preco = qtd * 1.00;
			soma += preco;

			printf("O valor do seu pedido é de R$%.2f\n", preco);

		}else{

			printf("Código Inválido!");

		}
		printf("\n");
		printf("Deseja fazer mais algum pedido?\n"
					"[1] => Sim\n"
					"[0] => Não\n"
					"Sua Opção: ");
		scanf("%d", &op);
		printf("\n");


	}printf("O valor total do pedido é de R$%.2f", soma);

}





