#include <stdio.h>


double d, l, c;


double consumo(){

	printf("Qual a distância percorrida (em Km): ");
	scanf("%lf", &d);
	printf("Qual o consumo de combustível (em litros): ");
	scanf("%lf", &l);
	printf("\n");

	c = d / l;

	if(c < 8){
		printf("Venda o carro!");

	}else if(8 <= c && c <= 14){
		printf("Econômico!");

	}else if(c > 14){
		printf("Super econômico!");

	}

}


int main(){

	consumo();

	return 0;

}
