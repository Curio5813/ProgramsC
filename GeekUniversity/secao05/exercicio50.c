#include <stdio.h>


int main(){

	int i;

	double chico = 1.50, ze = 1.10;

	for(i = 0; i < 100; i++){

		chico += 0.02;
		ze += 0.05;

		if(ze > chico){

			printf("Em %d anos Zé será maior que Chico.", i);

			break;

		}

	}

	return 0;

}
