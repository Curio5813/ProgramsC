#include <stdio.h>
//Operações Matemáticas

/*
somar +
subtrair -
multiplicar *
dividir /
elevar ao quadrado x ** 2
módulo (resto da divisão de x por y) %
*/
int main(){
	int num1, num2, soma;
	float res;

	//soma +
	res = num1 + num2;
	printf("A soma é %d\n", (int)res);

	//subtrair -
	res = num2 - num1;
	printf("A subtração é %d\n", (int)res);

	//Multiplicar *
	res = num1 * num2;
	printf("A multiplicação é %d\n", (int)res);

	//Dividir /
	res = (float)num1 / (float)num2; //cast
	printf("A divisão é %f\n", res);

	//Elevar ao quadrado **
	res = num1 * num1;
	printf("O quadrado de num1 é %d\n", (int)res);

	//módulo (verificando se o num1 é par ou ímpar)
	if(num1 % 2 == 0){
		printf("%d é par\n", num1);
	}else{
		printf("%d e'ímpar\n", num1);
	}

	return 0;

}
