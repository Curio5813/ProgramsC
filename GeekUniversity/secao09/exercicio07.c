#include <stdio.h>

float c, f;

float conversao_C_to_F(){
    printf("Qual a temperatura em C°: ");
    scanf("%f", &c);

    f = c * (9.0 / 5.0) + 32.0;

    printf("A temperatura em Fahrenheit é %.2f F°\n\n\n\n", f);

}

int main(){

    conversao_C_to_F();

    return 0;

}