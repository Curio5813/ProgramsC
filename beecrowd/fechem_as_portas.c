//
// Created by marcos on 12-12-2023.
//
#include <stdio.h>


int main(){

    long long int n;

    while(scanf("%lld", &n) != 0){
        long long int door[n], state[n], opened[n], cont = 0;
        for(int i = 0; i < n; i++) {
            door[i] = i + 1;
            state[i] = 0;
        }for(int i = 0; i < n; i++){
            for(int k = 0; k < n; k++){
                if(door[i] % door[k] == 0){
                    if(state[i] == 0){
                        state[i] = 1;
                    }else if(state[i] == 1){
                        state[i] = 0;
                    }
                }
            }
        }for(int i = 0; i < n; i++){
            if(state[i] == 1){
                opened[cont] = i + 1;
                cont += 1;
            }
        }for(int i = 0; i < cont; i++){
            printf("%lld ", opened[i]);
        }printf("\n");
    }

    return 0;
}
