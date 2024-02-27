#include <stdio.h>

void merge(int vetor[], int inicio1, int fim1, int inicio2, int fim2){
	//vetor temporário utilizado para merge
	int temp[50];
	//variáveis auxiliares
	int i, j, k;
	//início do primeiro grupo
	i = inicio1;
	//início do segundo grupo
	j = inicio2;
	k = 0;

	//Enquanto tiver elementos em ambos as os grupos...
	while(i <= fim1 && j <= fim2){
		//faz a ordenação de acordo com cada grupo
		if(vetor[i] < vetor[j]){
			temp[k++] = vetor[i++];
		}else{
			temp[k++] = vetor[j++];
		}
	}

	//Copia os elementos restantes do primeiro grupo
	while(i <= fim1){
		temp[k++] = vetor[i++];
	}

	//Copia os elementos restantes do segundo grupo
	while(j <= fim2){
		temp[k++] = vetor[j++];
	}

	//Transfere os elementos do vetor temporário para o original
	for(i = inicio1, j = 0; i <= fim2; i++, j++){
		vetor[i] = temp[j];
	}
}

void merge_sort(int vetor[], int inicio, int tam){

	if(inicio < tam){
		//calcula o meio do vetor
		int meio = (inicio + tam) / 2;

		//recursão esquerda
		merge_sort(vetor, inicio, meio);

		//recursão direita
		merge_sort(vetor, meio + 1, tam);

		//Faz o merge (junta) os dois grupos de vetores ordenados
		merge(vetor, inicio, meio, meio + 1, tam);
	}
}



int main() {
   int vetor[6] = {8, 3, 1, 42, 12, 5};

   //Aplicando a ordenação;
   //vetor, inicio, tamanho - 1
   merge_sort(vetor, 0, 6 - 1);

   //Apresentando o vetor ordenado
   for(int i = 0; i < 6; i++){
	   printf("%d\n", vetor[i]);
   }

}
