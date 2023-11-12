#include <stdio.h>


int main(){

	int v1[10], v2[10], v3[10], n1 = 0, n2 = 0, v4[10], n3 = 0, repet;

	for(int i = 0; i < 10; i++){

		printf("Digite o %dº número: ", i + 1);
		scanf("%d", &v1[i]);

	}printf("\n");
	for(int i = 0; i < 10; i++){

		printf("Digite o %dº número: ", i + 1);
		scanf("%d", &v2[i]);

	}for(int i = 0; i < 10; i++){

		for(int k = 0; k < 10; k++){

			if(v1[i] == v2[k]){

				n1 += 1;

			}

		}if(n1 >= 1){

			v3[n2] = v1[i];
			n2 += 1;

		}n1 = 0;

	}for(int i = 0; i < n2; i++){

        repet = 0;

        for (int j = 0; j < i; j++){

            if (v3[i] == v3[j]){

                repet = 1;
                break;

            }

        }

        if (repet == 0){

        	v4[n3] = v3[i];
        	n3 += 1;

        }

    }for(int i = 0; i < n3; i++){

    	printf("%d ", v4[i]);

    }

    return 0;

}

