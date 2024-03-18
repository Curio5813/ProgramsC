//
// Created by marcos on 18-03-2024.
//
# include <stdio.h>
# include <stdlib.h>


int main(){

    int t, q, distancia_total = 0, *teletransporte, *divisores, s, d, soma, *somas, tamanho_div, cont = 1;

    while((scanf("%d %d", &t, &q) != 0)){

        teletransporte = (int*)malloc(t * sizeof(int));

        for(int i = 0; i < t; i++){
            teletransporte[i] = abs(teletransporte[i]);
        }
        for(int i = 0; i < q; i++) {
            scanf("%d %d", &s, &d);
            distancia_total = abs(s + d);

            divisores = (int *) malloc(distancia_total * sizeof(int));
            somas = (int *) malloc(distancia_total * sizeof(int));

            int j = 0;

            for (int k = 2; k < distancia_total + 1; k++) {
                if (distancia_total % k == 0) {
                    divisores[j] = k;
                    j += 1;
                }
            }
            j = 0;
            for (int k = 0; k < distancia_total + 1; k++) {
                for (int m = 0; m < distancia_total + 1; m++) {
                    soma = divisores[k] + divisores[m];
                    tamanho_div = sizeof(*divisores) / sizeof(divisores[0]);
                    for (int z = 0; z < tamanho_div; z++) {
                        if (somas[k] == soma) {
                            cont = 0;
                            break;
                        }
                    }
                    if (cont == 1) {
                        somas[j] = soma;
                        j += 1;
                    }
                }
            }
            for (int k = 0; k < tamanho_div; k++) {
                for (int m = 0; m < t; m++) {
                    if (divisores[k] == teletransporte[m]) {
                        cont = 0;
                        break;
                    }

                }
                if (cont == 1) {
                    printf("N");
                    break;
                }
                for (int m = 0; m < t; m++) {
                    if (somas[k] == teletransporte[m]) {
                        cont = 0;
                        printf("N ");
                        break;
                    }
                }
                printf("\n");
            }
        }
        free(teletransporte);
        teletransporte = NULL;
        free(divisores);
        divisores = NULL;
        free(somas);
        somas = NULL;
    }
    return 0;
}