#include <stdio.h>

void bubble_sort(int vetor[], int tam){
	//variável auxiliar
	int proximo = 0;

	//varre todo o vetor externo
	for(int i = 0; i < tam; i++){
		//trabalha com os próximos elementos
		for(int j = 0; j < (tam - 1); j++){
			//Ocorre a troca
	        if(vetor[j] > vetor[j+1]){
	        	proximo = vetor[j];
	        	vetor[j] = vetor[j+1];
	        	vetor[j+1]=proximo;
	        }
	    }
	 }
}

int main() {
   int vetor[6] = {8, 3, 1, 42, 12, 5};

   //Aplicando a ordenação;
   bubble_sort(vetor, 6);

   //Apresentando o vetor ordenado
   for(int i = 0; i < 6; i++){
	   printf("%d\n", vetor[i]);
   }

}
