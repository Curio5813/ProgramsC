#include <stdio.h>


int main(){

	int num = 1, soma1 = 0, soma2 = 0, maior = 0, menor = 999999;
	double media1 = 0.0, media2 = 0.0, cont1 = 0.0, cont2 = 0.0;

	while(num != 0){

		printf("Digite um número: ");
		scanf("%d", &num);

		if(num == 0){

			break;

		}

		soma1 += num;
		cont1 += 1;

		if(num >= maior){

			maior = num;

		}if(num <= menor){

			menor = num;

		}if(num % 2 == 0){

			soma2 += num;
			cont2 += 1;

		}

	}media1 = soma1 / cont1;
	media2 = soma2 / cont2;
	printf("A soma dos número digitado foi %d\n", soma1);
	printf("A quantidade de números digitados foram %.0f\n", cont1);
	printf("A média dos números digitados foi de %.2lf\n", media1);
	printf("O maior número digitado foi %d\n", maior);
	printf("O menor número digitado foi %d\n", menor);
	printf("A média dos números pares foi de %.2lf\n", media2);

	return 0;

}
