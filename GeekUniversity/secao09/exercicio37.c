#include <stdio.h>


void hiperfatorial(){

	long long int h = 1, n = 1, num;

	printf("Digite um número para calcular seu Hiperfatorial: ");
	scanf("%lld", &num);

	while(n <= num){
		h *= pow(n, n);
		n += 1;

	}printf("O hiperfatorial de %lld é %lld.", num, h);

}


int main(){

	hiperfatorial();

	return 0;

}
