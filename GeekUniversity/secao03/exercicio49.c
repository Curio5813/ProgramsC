#include <stdio.h>


int main(){

	int hora, min, seg, horas, mins, segs;
	int cont1, cont2;

	cont1 = 0;
	cont2 = 0;

	printf("Qual foi as hora, os minutos e os segundos que o experimento começou? ");
	scanf("%d %d %d", &hora, &min, &seg);
	printf("\n");
	printf("Qual o tempo de duração em segundos do experimento? ");
	scanf("%d", &segs);

	horas = 60 * 60;
	mins = 60;

	while (segs >= horas){

		cont1 += 1;
		segs -= horas;

	}
	while (segs >= mins){

		cont2 += 1;
		segs -= mins;

	}

	hora += cont1;
	min += cont2;
	segs += seg;

	if (hora >= 24){
		hora -= 24;
	}


	if (min >= 60){
		hora += 1;
		mins -= 60;
		min = mins;
	}

	if (segs >= 60){
		min += 1;
		segs -= 60;
		seg = segs;
	}

	printf("\n");
	printf("O término do experimento se deu em %d:%d:%d", hora, min, seg);


	return 0;


}
