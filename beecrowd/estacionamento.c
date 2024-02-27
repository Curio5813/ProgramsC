#include <stdio.h>
#include <stdlib.h>


int main(){

	int c, n, j, k, faturamento, p_e, p_s, q;

	while((scanf("%d", &c)) != EOF){
		scanf("%d", &n);
		getchar();

		int i = 0, t = 0, u = 0, vdd = 0;

		int *placa = (int *)malloc(n * sizeof(int));
		int *quant = (int *)malloc(n * sizeof(int));
		int *ferro_velho = (int *)malloc(n * sizeof(int));

		int cont = 0, tam = c;
		char caracter;

		while(i < n){
			vdd = 0;
			scanf(" %c", &caracter);;
			if(caracter == 'C'){
				i += 1;
				scanf("%d", &p_e);
				scanf("%d", &q);
				vdd = 0;
				if(tam >= q){
					for(k = 0; k < t; k++){
						if(placa[k] == p_e){
							vdd = 1;
							break;
						}
					}if(vdd == 0){
						cont += 1;
						tam -= q;
						placa[t] = p_e;
						quant[t] = q;
						t += 1;
					}
				}vdd = 0;
				if(tam < q){
					for(k = 0; k < t; k++){
						if(placa[k] == p_e){
							vdd =1;
							break;
						}
					}if(vdd == 0){
						for(k = 0; k < u; k++){
							if(ferro_velho[k] == p_e){
								vdd = 1;
								break;
							}
						}if(vdd == 0){
							ferro_velho[u] = p_e;
							u += 1;
						}
					}
				}
			}vdd = 0;
			if(caracter == 'S'){
				i += 1;
				scanf("%d", &p_s);
				for(j = 0; j < t; j++){
					if(placa[j] == p_s){
						vdd = 1;
						tam += quant[j];
						placa[j] = 0;
						quant[j] = 0;
						break;
					}
				}
				if(vdd == 0){
					for(j = 0; j < u; j++){
						if(ferro_velho[j] == p_s){
							cont += 1;
							ferro_velho[j] = 0;
							break;
						}
					}

				}
			}
		}
		//for(k = 0; k < t; k++){
		//	printf("%d ", placa[k]);
		//}
		//printf("\n");
		//for(k = 0; k < u; k++){
			//printf("%d ", ferro_velho[k]);
		//}
		//printf("\n");
		faturamento = cont * 10;
		printf("%d\n", faturamento);

		//printf("Termina com tamanho: %d\n", tam);

		free(placa);
		placa = NULL;
		free(quant);
		quant = NULL;
	}

	return 0;
}
