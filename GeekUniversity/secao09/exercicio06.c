#include <stdio.h>

int hora, min, seg, total;

int segundos(){

    printf("Digite um valor para a hora, os minutos e os segundos: ");
    scanf("%d%d%d", &hora, &min, &seg);

    total = hora * 60 * 60 + min * 60 + seg;

    printf("O total de segundos é %d\n\n\n\n", total);

}

int main(){

    segundos(hora, min, seg);

    return 0;

}