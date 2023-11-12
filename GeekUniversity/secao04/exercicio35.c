#include <stdio.h>



int main(){

	int dia, mes, ano;

	printf("Qual o dia, o mês e o ano da data que quer verificar a validade? ");
	scanf("%d %d %d", &dia, &mes, &ano);


	if(0 >= dia || dia > 31 || 0 >= mes || mes > 12){

			printf("Data inválida!");

			return 0;

		}


	if(mes == 2){

		if(ano % 400 == 0 || ano % 4 == 0 && ano % 10 != 0){

			if(1 <= dia && dia <= 29){

				printf("Data válida!");

			}

		}else if(ano % 400 != 0 || ano % 4 == 0 && ano % 10 == 0){

			if(dia >= 29){

				printf("Data inválida!");

			}

		}

	}if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){

		if(1 <= dia && dia <= 31){

			printf("Data válida!");

		}else{

			printf("Data inválida!");

		}

	}if(mes == 4 || mes == 6 || mes == 9 || mes == 11){

		if(1 <= dia && dia <= 30){

			printf("Data válida!");

		}

	}

}
