#include <stdio.h>


int main(){

	int i, num, a = 0, b = 1, p = 1;

	printf("Digite um número: ");
	scanf("%d", &num);

	for(i = 0; i <= num; i ++){

		printf("%d ", a);

		if(a > num){

			break;
		}

		a = b;
		b = p;
		p = a + b;

	}

	return 0;

}

