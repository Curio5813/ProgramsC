#include <stdio.h>


int main(){

	int i, codigo, cont = 0, hab;
	double kwh = 0.084, horas, consumo = 0.0, soma = 0.0;
	double maior = 0.0, menor = 99999.0, media = 0.0;

	while(codigo != 4){
		printf("\n");
		printf("Qual o código do consumidor: \n"
				"[1] => Residencial\n"
				"[2] => Comercial\n"
				"[3] => Industrial\n"
				"[4] => Sair\n"
				"Código: ");
		scanf("%d", &codigo);

		printf("\n");
		if(codigo == 1){

			printf("Quantas residências tem a cidade? ");
			scanf("%d", &hab);

			while(cont < hab){
				printf("Quantas horas a residência consumiu por dia de energia elétrica? ");
				scanf("%lf", &horas);

				consumo = kwh * horas * 30;
				soma += consumo;

				if(consumo >= maior){

					maior = consumo;

				}if(consumo <= menor){

					menor = consumo;

				}cont += 1;

			}media = soma / hab;
			printf("\n");
			printf("O maior consumo foi de %.2lf Kwh, o menor de %.2lf Kwh\n"
					"e a média foi de %.2lf Kwh", maior, menor, media);

		cont = 0, horas = 0.0, maior = 0.0, menor = 999.0, soma = 0.0, media = 0.0;

		printf("\n");
		}else if(codigo == 2){

			printf("Quantos comêrcios tem a cidade? ");
			scanf("%d", &hab);

			while(cont < hab){

				printf("Quantas horas o comêrcio consumiu por dia de energia elétrica? ");
				scanf("%lf", &horas);

				consumo = kwh * horas * 30;
				soma += consumo;

				if(consumo >= maior){

					maior = consumo;

				}if(consumo <= menor){

					menor = consumo;

				}cont += 1;

			}media = soma / hab;
			printf("\n");
			printf("O maior consumo foi de %.2lf Kwh, o menor de %.2lf Kwh\n"
					"e a média foi de %.2lf Kwh", maior, menor, media);

		cont = 0, horas = 0.0, maior = 0, menor = 999.0, soma = 0.0, media = 0.0;

		printf("\n");
		}else if(codigo == 3){

			printf("Quantas indústrias tem a cidade? ");
			scanf("%d", &hab);

			while(cont < hab){

				printf("Quantas horas a indústria consumiu por dia energia elétrica? ");
				scanf("%lf", &horas);

				consumo = kwh * horas * 30;
				soma += consumo;

				if(consumo >= maior){

					maior = consumo;

				}if(consumo <= menor){

					menor = consumo;

				}cont += 1;

			}media = soma / hab;
			printf("\n");
			printf("O maior consumo foi de %.2lf Kwh, o menor de %.2lf Kwh\n"
					"e a média foi de %.2lf Kwh", maior, menor, media);

		cont = 0, horas = 0.0, maior = 0.0, menor = 999.0, soma = 0.0, media = 0.0;


		printf("\n");
		}else if(codigo == 4){

			printf("Programa finalizado.");

		}


	}

	return 0;

}
