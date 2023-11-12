#include <stdio.h>


int main(){

	int i, num;

	printf("Digite um número: ");
	scanf("%d", &num);

	for(i = num + 1; i > num; i++){

		if(i % 11 == 0 || i % 13 == 0 || i % 17 == 0){

			printf("%d", i);
			break;

		}

	}

	return 0;

}
