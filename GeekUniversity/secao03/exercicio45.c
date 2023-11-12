#include <stdio.h>
#include <ctype.h>


int main(){

    char c, result;

    printf("Digite uma letra maiuscula do alfabeto latino: ");
    scanf("%c", &c);
    printf("\n");

    result = tolower(c);
    printf("A letra minúscula de %c é %c.", c, result);


    return 0;

}
