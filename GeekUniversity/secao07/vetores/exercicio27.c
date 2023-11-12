#include <stdio.h>


int main(){

	int v[10], primo[10], pos[10], n = 0;

	for(int i = 0; i < 10; i++){

		printf("Digite o %d número inteiro: ", i + 1);
		scanf("%d", &v[i]);

	}for(int i = 0; i < 10; i++){

		for(int k = 2; k <= v[i]; k++){

			if(v[i] % k == 0 && k == v[i]){

				primo[n] = k;
				pos[n] = i + 1;
				n += 1;

			}else if(v[i] % k == 0 && k != v[i]){

				break;

			}

		}

	}for(int i = 0; i < n; i++){

		printf("%d na posição %d do vetor\n", primo[i], pos[i]);

	}

	return 0;

}
