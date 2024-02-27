#include <stdio.h>

int busca_binaria(int vet[], int chave, int tam){
     int inicio = 0;
     int fim = tam - 1;

     while (inicio <= fim){
    	  //Encontra o meio do vetor
          int meio = (inicio + fim)/2;

          //Se a chave estiver no meio, retorna
          if (chave == vet[meio]){
               return meio;
          }

          //Se a chave for menor que o valor do meio
          //passa para o próximo elemento
          if (chave < vet[meio]){
               fim = meio-1;
          }else{
               inicio = meio+1;
          }
     }
     //Se não encontrar nada...
     return -1;
}


int main() {
   //Vetor ordenado...
   int vetor[6] = {1, 3, 5, 8, 12, 42};

   int chave = 12;

   //Aplicando a ordenação;
   int ret = busca_binaria(vetor, chave, 6);

   printf("O elemento %d está na posição %d", chave, ret);

}
