#include <stdio.h>
#include <stdlib.h>


int main(){

	int m[5][5], v1[80], v2[25], n1 = 0, n2 = 0, repete = 0;

	srand(time(NULL));

	for(int i = 0; i < 80; i++){

		v1[i] = rand() % 99;

	}for(int i = 0; i < 100; i++){

		repete = 0;

		if(n1 == 25){

			break;

		}

	    for (int j = 0; j < i; j++){

	    	if (v1[i] == v1[j]){

	    		repete = 1;
	            break;

	    	}

	    }if (repete == 0){

	    	 v2[n1] = v1[i];
	    	 n1 += 1;

	    }

	}for(int i = 0; i < 5; i++){

		for(int k = 0; k < 5; k++){

			m[i][k] = v2[n2];
			n2 += 1;

		}

	}for(int i = 0; i < 5; i++){

		for(int k = 0; k < 5; k++){

			printf("%4d ", m[i][k]);

		}printf("\n");

	}

	return 0;

}
