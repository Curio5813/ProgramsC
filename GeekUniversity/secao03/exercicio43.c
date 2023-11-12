#include <stdio.h>


int main(){

	float valor, valor1, desc, parcela, comi_desc, comi_parc;

	desc = 0.10;

	printf("Qual o valor do produto? $");
	scanf("%f", &valor);
	printf("\n");

	valor1 = valor * (1 - desc);
	comi_desc = valor1 * 0.05;

	printf("Valor à vista do produto com desconto de 10% é igual a $%.2f\n", valor1);
	printf("O Valor pago ao vendedor de comissão na venda à vista é de $%.2f\n", comi_desc);

	parcela = valor / 3;
	comi_parc = valor * 0.05;

	printf("\n");
	printf("Valor à prazo das parcelas em 3x (sem juros) são guais a $%.2f\n", parcela);
	printf("O Valor pago ao vendedor de comissão na venda pareclada é de $%.2f\n", comi_parc);



	return 0;

}
