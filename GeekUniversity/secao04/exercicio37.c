#include <stdio.h>



int main(){

	int hora1, min1, hora2, min2, tempo, n;
	double qt, tarifa;

	n = 0;

	printf("Qual o horário de chegada? ");
	scanf("%d %d", &hora1, &min1);
	printf("Qual o horário de partida? ");
	scanf("%d %d", &hora2, &min2);
	printf("\n");

	if(hora2 >= hora1 && min2 >= min1){

		tempo = (hora2 - hora1) * 60 + (min2 - min1);
		qt = ceil(tempo / 60.0);

		while(n < qt){

			if(n < 2){

				tarifa += 1.0;

			}else if(2 <= n && n < 4){

				tarifa += 1.40;

			}else if(4 <= n){

				tarifa += 2.0;

			}n += 1;

		}
		printf("O veículo passou %.0lf hora(s) no estacionamento.\n", qt);
		printf("O cliente tem a pagar R$%.2lf", tarifa);

	}else if(hora2 >= hora1 && min1 >= min2){

		tempo = (hora2 - hora1) * 60 + (60 - min1 + min2);
		qt = ceil(tempo / 60.0);

		while(n < qt){

			if(n < 2){

				tarifa += 1.0;

			}else if(2 <= n && n < 4){

				tarifa += 1.40;

			}else if(4 <= n){

				tarifa += 2.0;

			}n += 1;

		}
		printf("O veículo passou %.0lf hora(s) no estacionamento.\n", qt);
		printf("O cliente tem a pagar R$%.2lf", tarifa);


	}else if(hora1 > hora2 && min2 >= min1){

		tempo = (24 - hora1 + hora2) * 60 + (min2 - min1);
		qt = ceil(tempo / 60.0);

		while(n < qt){

			if(n < 2){

				tarifa += 1.0;

			}else if(2 <= n && n < 4){

				tarifa += 1.40;

			}else if(4 <= n){

				tarifa += 2.0;

			}n += 1;

		}
		printf("O veículo passou %.0lf hora(s) no estacionamento.\n", qt);
		printf("O cliente tem a pagar R$%.2lf", tarifa);

	}else if(hora1 > hora2 && min1 >= min2){

		tempo = (24 - hora1 + hora2) * 60 + (60 - min1 + min2);
		qt = ceil(tempo / 60.0);

		while(n < qt){

			if(n < 2){

				tarifa += 1.0;

			}else if(2 <= n && n < 4){

				tarifa += 1.40;

			}else if(4 <= n){

				tarifa += 2.0;

			}n += 1;

		}
		printf("O veículo passou %.0lf hora(s) no estacionamento.\n", qt);
		printf("O cliente tem a pagar R$%.2lf", tarifa);


	}

}
