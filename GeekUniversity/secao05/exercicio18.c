#include <stdio.h>


int main(){

	int i, qt, num, maior = 0, qt_num = 0;

	maior = 0;

	printf("Digite quantos números deseja verificar: ");
	scanf("%d", &qt);

	for(i = 0; i < qt; i++){

		printf("Digite um número: ");
		scanf("%d", &num);

		if(num > maior){

			maior = num;
			qt_num = 0;

		}if(num == maior){

			qt_num += 1;

		}

	}printf("O maior número é %d e apareceu %d vezes.", maior, qt_num);

	return 0;

}
