#include <stdio.h>



int main(){

	float c, l, preco, vlr;

	printf("Qual o valor do comprimento e largura do terrêno? ");
	scanf("%f %f", &c, &l);

	printf("\n");
	printf("Qual o valor do metro quadrado da tela? $");
	scanf("%f", &preco);

	vlr = (c + c + l + l) * preco;

	printf("\n");
	printf("O valor para telar o terrêno é de $%.2f", vlr);


	return 0;

}
