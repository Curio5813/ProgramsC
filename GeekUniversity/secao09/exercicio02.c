#include <stdio.h>

int dia, mes, ano;

int data(){
    printf("Digite uma dia do ano: ");
    scanf("%d", &dia);
    printf("Digite um mês do ano: ");
    scanf("%d", &mes);
    printf("Digite um ano: ");
    scanf("%d", &ano);
    printf("\n\n");

    if(mes == 1){
        return printf("%d de janeiro de %d.", dia, ano);
    }else if(mes == 2){
        return printf("%d de fevereiro de %d.", dia, ano);

    }else if(mes == 3){
        return printf("%d de março de %d.", dia, ano);

    }else if(mes == 4){
        return printf("%d de abril de %d.", dia, ano);

    }else if(mes == 5){
        return printf("%d de maio de %d.", dia, ano);

    }else if(mes == 6){
        return printf("%d de junho de %d.", dia, ano);

    }else if(mes == 7){
        return printf("%d de julho de %d.", dia, ano);

    }else if(mes == 8){
        return printf("%d de agosto de %d.", dia, ano);

    }else if(mes == 9){
        return printf("%d de setembro de %d.", dia, ano);

    }else if(mes == 10){
        return printf("%d de outubro de %d.", dia, ano);

    }else if(mes == 11){
        return printf("%d de novembro de %d.", dia, ano);

    }else if(mes == 12){
        return printf("%d de dezembro de %d.", dia, ano);

    }

}

int main(){
    data();
    printf("\n\n\n");

    return 0;
}