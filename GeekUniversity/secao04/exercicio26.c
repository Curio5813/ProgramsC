#include <stdio.h>



int main(){

	float km, l, c;

	printf("Qual a distância percorrida pelo carro? ");
	scanf("%f", &km);
	printf("Qual a quantidade de combustível consumida? ");
	scanf("%f", &l);

	c = km / l;

	if(c < 8){

		printf("Venda o carro!");

	}else if(c >= 8 && c <= 12){

		printf("Econômico!");

	}else if(c > 12){

		printf("Super econômico!");

	}


}
