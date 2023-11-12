#include <stdio.h>


int main(){

	int v[100], n = 0;

	for(int i = 1; n < 100; i++){

		if(i % 7 == 0 || i % 10 == 7){

			v[n] = i;
			n += 1;

		}

	}for(int i = 0; i < 100; i++){

		printf("%d - %d\n", i + 1, v[i]);

	}

	return 0;

}
