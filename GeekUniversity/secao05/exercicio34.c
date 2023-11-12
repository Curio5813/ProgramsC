#include <stdio.h>
#include <time.h>


int main(){

	time_t begin = time(NULL);

	int i, flag = 1, cont = 20;

	while(flag != 0){

		for(i = 1; i <= 20; i++){

			if(cont % i == 0){

				flag = 0;

			}if(cont % i != 0){

				flag = 1;
				cont += 1;
				break;
			}

		}

	}printf("%d\n", cont);

	time_t end = time(NULL);
	printf("Demorou %d segundos", (end - begin));

	return 0;

}
