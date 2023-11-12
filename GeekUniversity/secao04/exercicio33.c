#include <stdio.h>



int main(){

	float preco, novo;

	printf("Quanto custava o produto: R$ ");
	scanf("%f", &preco);

	if(preco <= 50){

		novo = preco * 1.05;
		printf("O preço novo do produto reajustado é de R$ %.2f", novo);

	}else if(50 < preco && preco <= 100){

		novo = preco * 1.10;
		printf("O preço novo do produto reajustado é de R$ %.2f", novo);

	}else if(preco > 100){

		novo = preco * 1.15;
		printf("O preço novo do produto reajustado é de R$ %.2f", novo);

	}

	return 0;

}
