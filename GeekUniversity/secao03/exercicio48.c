#include <stdio.h>


int main(){

	int hora, min, seg, cont1, cont2;

	cont1 = 0;
	cont2 = 0;


	printf("Quantos segundos deseja calcular as horas, minutos, e segundos? ");
	scanf("%d", &seg);

	hora = 60 * 60;
	min = 60;

	while (seg >= hora){

		cont1 += 1;
		seg -= hora;
	}
	while (seg >= min){

		cont2 += 1;
		seg -= min;
	}

	printf("\n");
	printf("O total de horas minutos e segundos é igual a %dhrs %dmins %dsegs. ", cont1, cont2, seg);



	return 0;


}
