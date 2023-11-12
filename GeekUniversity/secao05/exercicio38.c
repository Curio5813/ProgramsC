#include <stdio.h>
#include <math.h>
#include <time.h>


int main(){

	time_t begin = time(NULL);

	int i, a, b, c;


	for(c = 1; c <= 1000; c++){

		for(b = 1; b <= 1000; b++){

			if(b >= c){

				break;
			}

			for(a = 1; a <= 1000; a++){

				if(a < b && pow(c, 2) == pow(b, 2) + pow(a, 2) && a + b + c == 1000){

					printf("%d %d %d\n", c, b, a);
				}

			}
		}

	}
	time_t end = time(NULL);
	printf("Demorou %d segundos", (end - begin));


	return 0;

}
