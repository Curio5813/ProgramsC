#include <stdio.h>
#include <stdlib.h>


int main(){

	int i, x, y, m, xi, yi;

	while (scanf("%d %d %d", &x, &y, &m) != EOF){

		for(i = 0; i < m; i++){

			scanf("%d %d", &xi, &yi);

			if(xi <= x && xi <= y && yi <= x && yi <= y){

				printf("Sim\n");

			}else{

				printf("Nao\n");

			}

		}

	}

	return 0;

}
