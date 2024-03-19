# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int cont = 1;

int main() {

    int n, m, t, amigo1, amigo2;

    while (scanf("%d %d %d", &n, &m, &t) != EOF) {

        int amigos = 0;
        int booleano = 0;
        int festa[n];
        int pares[m][2];
        int amizades[n];
        int *talvez_festa = (int*) malloc(n * sizeof(int));
        int *nao_festa = (int*) malloc(n * sizeof(int));

        for (int i = 0; i < n; i++) {
            festa[i] = i + 1;
        }
        for (int i = 0; i < m; i++) {
            scanf("%d %d", &amigo1, &amigo2);
            pares[i][0] = amigo1;
            pares[i][1] = amigo2;
        }
        for(int i = 0; i < n; i++){
            for(int k = 0; k < m; k++){
                if(festa[i] == pares[k][0]){
                    amigos += 1;
                }
                if(festa[i] == pares[k][1]){
                    amigos += 1;
                }
            }
            amizades[i] = amigos;
            amigos = 0;
        }
        for(int i = 0; i < n; i ++) {
            if (amizades[i] >= t) {
                talvez_festa[i] = i + 1;
            }else{
                talvez_festa[i] = 0;
            }
        }
        for(int i = 0; i < n; i ++){
            if(amizades[i] < t){
                nao_festa[i] = i + 1;
            }
            else{
                nao_festa[i] = 0;
            }
        }/*
        for(int i = 0; i < n; i++){
            printf("%d ", amizades[i]);
        }
        printf("\n");
        for(int i = 0; i < n; i++){
            printf("%d ", talvez_festa[i]);
        }
        printf("\n");
        for(int i = 0; i < n; i++){
            printf("%d ", nao_festa[i]);
        }
        printf("\n");*/
        for(int i = 0; i < n; i++){
            for(int k = 0; k < m; k++){
                if(talvez_festa[i] == pares[k][0]){
                    for(int j = 0; j < n; j++){
                        if(pares[k][1] == nao_festa[j]){
                            amizades[i] -= 1;
                        }
                    }
                }
                if(talvez_festa[i] == pares[k][1]) {
                    for (int j = 0; j < n; j++) {
                        if (pares[k][0] == nao_festa[j]) {
                            amizades[i] -= 1;
                        }
                    }
                }
            }
        }/*
        for(int i = 0; i < n; i++){
            printf("%d ", amizades[i]);
        }
        printf("\n");*/
        for (int i = 0; i < n; i++) {
            if (amizades[i] >= t) {
                if (i >= n - 1) {
                    printf("%d", i + 1);
                    booleano = 1;
                    printf('\0');
                    break;
                }
                printf("%d ", i + 1);
                booleano = 1;
            }
        }
        if (booleano == 0) {
            printf("%d", 0);
        }
        printf("\n");
        free(talvez_festa);
        talvez_festa = NULL;
        free(nao_festa);
        nao_festa = NULL;
        cont += 1;
    }
    return 0;
}