//
// Created by marcos on 08-12-2023.
//
#include <stdio.h>

struct st_vetor{
    float x;
    float y;
    float z;
}vetor[2][3];

int main(){

    float soma[3];

    for(int i = 0; i < 2; i++) {
        printf("Qual o valor da coordenada x do %dº vetor: ", i + 1);
        scanf("%f", &vetor[i][0].x);
        printf("Qual o valor da coordenada y do %dº vetor: ", i + 1);
        scanf("%f", &vetor[i][1].y);
        printf("Qual o valor da coordenada z do %dº vetor: ", i + 1);
        scanf("%f", &vetor[i][2].z);

    }printf("\n");

    soma[0] = vetor[0][0].x + vetor[1][0].x;
    soma[1] = vetor[0][1].y + vetor[1][1].y;
    soma[2] = vetor[0][2].z + vetor[1][2].z;

    printf("=== SOMA DOS VETORES ===\n");
    printf("x: %.1f ", soma[0]);
    printf("y: %.1f ", soma[1]);
    printf("z: %.1f ", soma[2]);

    return 0;
}
