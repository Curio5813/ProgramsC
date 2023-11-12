#include <stdio.h>


int main(){

	int v1[10], v2[10], v3[20], v4[20], n1 = 0, n2 = 0, repet;

	for(int i = 0; i < 10; i++){

		printf("Digite o %dº número para o 1º vetor: ", i + 1);
		scanf("%d", &v1[i]);

	}printf("\n");
	for(int i = 0; i < 10; i++){

		printf("Digite o %dº número para o 2º vetor: ", i + 1);
		scanf("%d", &v2[i]);

	}for(int i = 0; i < 10; i++){

		v3[n1] = v1[i];
		n1 += 1;
		v3[n1] = v2[i];
		n1 += 1;

	}for(int i = 0; i < n1; i++){

		repet = 0;

	    for (int j = 0; j < i; j++){

	    	if (v3[i] == v3[j]){

	    		repet = 1;
	            break;

	    	}

	    }if (repet == 0){

	    	 v4[n2] = v3[i];
	    	 n2 += 1;

	    }

	}for(int i = 0; i < n2; i++){

	    printf("%d ", v4[i]);

	}

	return 0;

}
