#include <stdio.h>
#include <stdlib.h>


int ordenacao_vetor(int *a, int *b, int *c){

	if(*(a) > *(b) && *(b) > *(c)){

		printf("%d %d %d", *(a), *(b), *(c));

	}else if(*(a) > *(b) && *(b) < *(c) && *(a) > *(c)){

		printf("%d %d %d", *(a), *(c), *(b));

	}else if(*(a) < *(b) && *(b) > *(c) && *(a) > *(c)){

		printf("%d %d %d", *(b), *(a), *(c));

	}else if(*(a) < *(b) && *(b) > *(c) && *(a) < *(c)){

		printf("%d %d %d", *(b), *(c), *(a));

	}else if(*(a) > *(b) && *(a) < *(c)){

		printf("%d %d %d", *(c), *(a), *(b));

	}else if(*(a) < *(b) && *(b) < *(c)){

		printf("%d %d %d", *(c), *(b), *(a));

	}else if(*(a) == *(b) && *(a) == *(c)){

		printf("1");

	}

}


int main(){

	int a, b, c;

	printf("Digite um número inteiros: ");
	scanf("%d", &a);
	printf("Digite outro número inteiros: ");
	scanf("%d", &b);
	printf("Digite mais um número inteiros: ");
	scanf("%d", &c);
	printf("\n");

	ordenacao_vetor(&a, &b, &c);

	return 0;

}
