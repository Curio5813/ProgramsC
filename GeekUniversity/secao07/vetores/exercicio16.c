#include <stdio.h>


int main(){

	int codigo;
	float arr[5];

	for(int i = 0; i < 5; i++){

		printf("Digite o %dº valor: ", i + 1);
		scanf("%f", &arr[i]);

	}printf("\n");
	printf("Digite uma opção:\n"
			"[1] => Mostra o vetor na oredem direta;\n"
			"[2] => Mostrar o vetor na ordem inversa;\n"
			"[0] => Sair do Programa.\n");
	scanf("%d", &codigo);

	if(codigo == 1){

		for(int i = 0; i < 5; i++){

			printf("%.2f ", arr[i]);

		}
	}if(codigo == 2){

		for(int i = 4; i >= 0; i--){

			printf("%.2f ", arr[i]);

		}

	}if(codigo == 0){

		printf("Programa finalizado.");

	}

	return 0;

}
