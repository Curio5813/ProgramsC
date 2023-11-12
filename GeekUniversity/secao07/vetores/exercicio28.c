#include <stdio.h>


int main(){

	int v[10], v1[10], v2[10], n1 = 0, n2 = 0;

	for(int i = 0; i < 10; i++){

		printf("Digite o %dº número inteiro: ", i + 1);
		scanf("%d", &v[i]);

	}for(int i = 0; i < 10; i++){

		if(v[i] % 2 == 0){

			v1[n1] = v[i];
			n1 += 1;

		}else if(v[i] % 2 != 0){

			v2[n2] = v[i];
			n2 += 1;
		}

	}for(int i = 0; i < n1; i++){

		printf("%d ", v1[i]);

	}printf("\n");
	for(int i = 0; i < n2; i++){

		printf("%d ", v2[i]);

	}

	return 0;

}
