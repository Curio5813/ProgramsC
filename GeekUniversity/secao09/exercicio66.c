#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void minuscula_maiuscula(){

	char minuscula[50] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
			'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

	char maiuscula[50] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
			'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

	char caracter[50];

	int idx = 0;

	printf("Digite um caracter: ");
	scanf("%s", &caracter[0]);

	for(int i = 0; i < 26; i++){
		if(caracter[0] == minuscula[i]){
			idx = i;
			break;

		}

	}printf("%c", maiuscula[idx]);

}


int main(){

	minuscula_maiuscula();

	return 0;

}
