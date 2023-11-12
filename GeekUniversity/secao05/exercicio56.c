#include <stdio.h>
#include <time.h>


int main(){

	time_t begin = time(NULL);

	int i, p = 2, soma = 0;

	while(p < 200000){

		for(i = 2; i <= p; i++){

			if(p % i == 0 && i == p){

				soma += p;
				p += 1;
				break;

			}else if(p % i == 0 && i != p){

				p += 1;
				break;
			}

		}

	}printf("A soma de todos os números primos até 2 milhões é %d\n", soma);
	time_t end = time(NULL);
	printf("Demorou %d segundos", (end - begin));


	return 0;

}
