#include <stdio.h>

void select_sort(int vetor[], int tam){
  int menor, troca;
  //Loop externo para repassar todo vetor
  for(int i = 0; i < (tam-1); i++){
	//variável para acompanhar o loop for pegando sempre o menor elemento
	menor = i;
	//Loop interno para trabalhar com o próximo elemento
    for(int j = (i+1); j < tam; j++){
      if(vetor[j] < vetor[menor]){
        menor = j;
      }
    }
    //Onde ocorre a troca
    if(i != menor){
      troca = vetor[i];
      vetor[i] = vetor[menor];
      vetor[menor] = troca;
    }
  }
}

int main() {
   int vetor[6] = {8, 3, 1, 42, 12, 5};

   //Aplicando a ordenação;
   select_sort(vetor, 6);

   //Apresentando o vetor ordenado
   for(int i = 0; i < 6; i++){
	   printf("%d\n", vetor[i]);
   }

}
