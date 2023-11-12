#include <stdio.h>


int n, t, cont = 0, aux = 1;


int TrianguloEstrela(){

	printf("Digite um número para a largura do triangulo: ");
	scanf("%d", &n);

	t = 2 * n - 1;

	while(cont <= t){

		if(cont < n){

			for(int i = 0; i < aux - 1; i++){
				printf("*");

			}printf("\n");
			aux += 1;
			cont += 1;

		}if(cont >= n){

			for(int i = aux - 1; i > 0; i--){
				printf("*");

			}printf("\n");
			aux -= 1;
			cont += 1;

		}

	}


}


int main(){

	TrianguloEstrela();

	return 0;

}
