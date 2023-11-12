#include <stdio.h>


void superfatorial(){

	long long int sf = 1, fat = 1, n = 1, num;

	printf("Digite um número para calcular seu superfatorial: ");
	scanf("%lld", &num);
	printf("\n");

	for(long long int i = 1; i <= num; i++){
		fat = 1;
		n = 1;
		while(n <= i){
			fat *= n;
			n += 1;
		}sf *= fat;


	}printf("O superfatorial de %lld é %lld.", num, sf);

}


int main(){

	superfatorial();

	return 0;

}
