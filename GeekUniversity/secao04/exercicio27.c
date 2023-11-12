#include <stdio.h>



int main(){

	int idade;

	printf("Qual a idade do nadador? ");
	scanf("%d", &idade);

	if(idade >= 5 && idade <= 7){

		printf("Categoria: Infantil A");

	}else if(idade >= 8 && idade <= 10){

		printf("Categoria: Infantil B");

	}else if(idade >= 11 && idade <= 13){

		printf("Categoria: Juvenil A");

	}else if(idade >= 14 && idade <= 17){

		printf("Categoria: Juvenil B");

	}else if(idade >= 18){

		printf("Sênior");

	}

	return 0;

}
