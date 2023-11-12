#include <stdio.h>


int main(){

	int v1[15], v2[15], n1 = 0;

	for(int i = 0; i < 15; i++){

		printf("Digite %2dº numero: ", i + 1);
		scanf("%d", &v1[i]);

	}for(int i = 0; i < 15; i++){

		if(v1[i] != 0){

			v2[n1] = v1[i];
			n1 += 1;

		}

	}for(int i = 0; i < n1; i++){

		printf("%d ", v2[i]);

	}

	return 0;

}
