#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

	char str_col[26];

	int idx, entrada;

	while(scanf("%s", &str_col) != EOF){

		while(strlen(str_col) > 3){
			printf("Essa coluna nao existe Tobias!");
			scanf("%s", &str_col);

		// Usando a numeração decimal da Tabela ASCII para achar os índices
		}if(strlen(str_col) == 1){
			printf("%d\n", str_col[0] - 64);

		}else if(strlen(str_col) == 2){
			printf("%d\n", (str_col[0] - 64) * 26 + (str_col[1] - 64));

		}else if(strlen(str_col) == 3){
			idx = ("%d\n", (str_col[0] - 64) * 26 * 26 + (str_col[1] - 64) * 26 + str_col[2] - 64);

			if(idx > 16384){
				printf("Essa coluna nao existe Tobias!");

			}else if(idx <= 16384){
				printf("%d\n", idx);

			}

		}

	}

	return 0;

}
