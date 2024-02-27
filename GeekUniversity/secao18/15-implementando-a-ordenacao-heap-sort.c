#include <stdio.h>

void cria_heap(int vetor[], int inicio, int fim){
	int pai = vetor[inicio];
	int filho = inicio * 2 + 1;

	while(filho <= fim){
		//Pai tem 2 filhos? Quem é o maior?
		if(filho < fim){
			if(vetor[filho] < vetor[filho + 1]){
				filho = filho + 1;
			}
		}
		//Filho maior que o pai?
		//Filho se torna pai.
		//Repetir o processo.
		if(pai < vetor[filho]){
			vetor[inicio] = vetor[filho];
			inicio = filho;
			filho = 2 * inicio + 1;
		}else{
			filho = fim + 1;
		}
	}
	//Antigo pai ocupa o lugar do
	// último filho analisado
	vetor[inicio] = pai;
}

void heap_sort(int vetor[], int tam){
	int troca;
	int meio = (tam - 1) / 2;

	//Cria a heap a partir dos dados
	for(int i = meio; i >= 0; i--){
		cria_heap(vetor, i, tam - 1);
	}


	for(int i = tam - 1; i >= 1; i--){
		//Pega maior elemento da heap e coloca
		// na sua posição correspondente do vetor
		troca = vetor[0];
		vetor[0] = vetor[i];
		vetor[i] = troca;

		//Reconstroi a heap
		cria_heap(vetor, 0, i - 1);
	}
}





int main() {
   int vetor[6] = {8, 3, 1, 42, 12, 5};

   //Aplicando a ordenação;
   heap_sort(vetor, 6);

   //Apresentando o vetor ordenado
   for(int i = 0; i < 6; i++){
	   printf("%d\n", vetor[i]);
   }

}
