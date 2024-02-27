#include <stdio.h>
#include <stdlib.h>


int main(){

	long long int largura, comprimento, tabua, doadas, cont1, cont2;
	long long int bool, bool1, bool2, bool3, bool4, n1, n2;
	long long int n_tabuas1, n_tabuas2, menor, menor1, menor2, aux1, aux2;
	long long int *tabuas, *idx1, *idx2, resp;
	long long int largura_tabua, max;


	scanf("%lld %lld", &largura, &comprimento);
	while(largura != 0 && comprimento != 0){
		largura *= 100;
		comprimento *= 100;
		scanf("%lld", &largura_tabua);
		scanf("%lld", &doadas);
		n_tabuas1 = 0;
		n_tabuas2 = 0;
		cont1 = 0;
		cont2 = 0;
        menor = 0;
        max = 1000000;
		menor1 = max;
		menor2 = max;
        bool = 0;
		bool1 = 1;
		bool2 = 1;
		bool3 = 1;
		bool4 = 1;
		n1 = 0, n2 = 0, aux1 = 0, aux2 = 0;
		tabuas = (long long int*)malloc(doadas * sizeof(long long int));
		idx1 = (long long int*)malloc(max * sizeof(long long int));
		idx2 = (long long int*)malloc(max * sizeof(long long int));
		for(int i = 0; i < doadas; i++){
			scanf("%lld", &tabua);
			tabuas[i] = tabua * 100;
		}
		if(largura == 100 && comprimento == 100 && largura_tabua == 100){
			for(int i = 0; i < doadas; i++){
				if(tabuas[i] == 100){
					menor = 1;
                    break;
				}
			}
		}else if(menor == 0){
			for(int i = 0; i < doadas; i++){
				for(int k = 0; k < doadas; k++){
					if(i == 0 && k != 0){
						if(tabuas[i] == largura && aux1 < 1){
							aux1 += 1;
							cont1 += 1;
							n_tabuas1 += 1;
							idx1[n1] = i;
							//printf("%d ", idx1[n1]);
							n1 += 1;
						}
						if(tabuas[i] + tabuas[k] == largura && aux1 < 1){
							aux1 += 1;
							cont1 += 1;
							n_tabuas1 += 2;
							idx1[n1] = i;
							//printf("%d ", idx1[n1]);
							n1 += 1;
							idx1[n1] = k;
							//printf("%d\n", idx1[n1]);
							n1 += 1;
							if(cont1 * largura_tabua * largura == largura * comprimento){
								resp = n_tabuas1;
								if(resp < menor1){
									menor1 = resp;
								}
								cont1 = 0;
								n_tabuas1 = 0;
								n1 = 0;
								free(idx1);
								idx1 = NULL;
								idx1 = (long long int*)malloc(max * sizeof(long long int));
								break;
							}
						}
					}
					if(i == k && i != 0){
						if(tabuas[k]== largura){
							for(int j = 0; j < doadas; j++){
								if(k != idx1[j]){
									bool1 = 1;
								}else{
									bool1 = 0;
									break;
								}
							}
							if(bool1 == 1){
								cont1 += 1;
								n_tabuas1 += 1;
								idx1[n1] = k;
								//printf("%d\n", idx1[n1]);
								n1 += 1;
								if(cont1 * largura_tabua * largura == largura * comprimento){
									resp = n_tabuas1;
									if(resp < menor1){
										menor1 = resp;
									}
									cont1 = 0;
									n_tabuas1 = 0;
									n1 = 0;
									free(idx1);
									idx1 = NULL;
									idx1 = (long long int*)malloc(max * sizeof(long long int));
									break;
								}
							}else{
								bool1 = 1;
							}
						}
					}
					if(i != k){
						if(tabuas[k]== largura){
							for(int j = 0; j < doadas; j++){
								if(k != idx1[j]){
									bool1 = 1;
								}else{
									bool1 = 0;
									break;
								}
							}if(bool1 == 1){
								cont1 += 1;
								n_tabuas1 += 1;
								idx1[n1] = k;
								//printf("%d\n", idx1[n1]);
								n1 += 1;
								if(cont1 * largura_tabua * largura == largura * comprimento){
									resp = n_tabuas1;
									if(resp < menor1){
										menor1 = resp;
									}
									cont1 = 0;
									n_tabuas1 = 0;
									n1 = 0;
									free(idx1);
									idx1 = NULL;
									idx1 = (long long int*)malloc(max * sizeof(long long int));
									break;
								}
							}else{
								bool1 = 1;
							}
						}
						if(tabuas[i] + tabuas[k] == largura){
							for(int j = 0; j < doadas; j++){
								if(k != idx1[j]){
									bool1 = 1;
								}else{
									bool1 = 0;
									break;
								}
							}
							for(int j = 0; j < doadas; j++){
								if(i != idx1[j]){
									bool2 = 1;
								}else{
									bool2 = 0;
									break;
								}
							}
							if(bool1 == 1 && bool2 == 1){
								cont1 += 1;
								n_tabuas1 += 2;
								idx1[n1] = i;
								//printf("%d ", idx1[n1]);
								n1 += 1;
								idx1[n1] = k;
								//printf("%d\n", idx1[n1]);
								n1 += 1;
								if(cont1 * largura_tabua * largura == largura * comprimento){
									resp = n_tabuas1;
									if(resp < menor1){
										menor1 = resp;
									}
									cont1 = 0;
									n_tabuas1 = 0;
									n1 = 0;
									free(idx1);
									idx1 = NULL;
									idx1 = (long long int*)malloc(max * sizeof(long long int));
									break;
								}
							}else{
								bool1 = 1;
								bool2 = 1;
							}
						}
					}
				}

			}
			for(int i = 0; i < doadas; i++){
				for(int k = 0; k < doadas; k++){
					if(i == 0 && k != 0){
						if(tabuas[i] == comprimento && aux2 < 1){
							aux2 += 1;
							cont2 += 1;
							n_tabuas2 += 1;
							idx2[n2] = i;
							//printf("%d\n", idx2[n2]);
							n2 += 1;
						}
						if(tabuas[i] + tabuas[k] == comprimento && aux2 < 1){
							aux2 += 1;
							cont2 += 1;
							n_tabuas2 += 2;
							idx2[n2] = i;
							//printf("%d ", idx2[n2]);
							n2 += 1;
							idx2[n2] = k;
							n2 += 1;
							//printf("%d\n", idx2[n2]);
							if(cont2 * largura_tabua * comprimento == largura * comprimento){
								resp = n_tabuas2;
								if(resp < menor2){
									menor2 = resp;
								}
								cont2 = 0;
								n_tabuas2 = 0;
								n2 = 0;
								free(idx2);
								idx2 = NULL;
								idx2 = (long long int*)malloc(max * sizeof(long long int));
								break;
							}
						}
					}
					if(i == k && i != 0){
						if(tabuas[k]== comprimento){
							//printf("Ok2!\n");
							for(int j = 0; j < doadas; j++){
								if(k != idx2[j]){
									bool3 = 1;
								}else{
									bool3 = 0;
									break;
								}
							}
							if(bool3 == 1){
								cont2 += 1;
								n_tabuas2 += 1;
								idx2[n2] = k;
								//printf("%d\n", idx2[n2]);
								n2 += 1;
								if(cont2 * largura_tabua * comprimento == largura * comprimento){
									resp = n_tabuas2;
									if(resp < menor2){
										menor2 = resp;
									}
									cont2 = 0;
									n_tabuas2 = 0;
									n2 = 0;
									free(idx2);
									idx2 = NULL;
									idx2 = (long long int*)malloc(max * sizeof(long long int));
									break;
								}
							}else{
								bool3 = 1;
							}
						}
					}
					if(i != k){
						if(tabuas[k]== comprimento){
							for(int j = 0; j < doadas; j++){
								if(k != idx2[j]){
									bool3 = 1;
								}else{
									bool3 = 0;
									break;
								}
							}if(bool3 == 1){
								cont2 += 1;
								n_tabuas2 += 1;
								idx2[n2] = k;
								//printf("%d\n", idx2[n2]);
								n2 += 1;
								if(cont2 * largura_tabua * comprimento == largura * comprimento){
									resp = n_tabuas2;
									if(resp < menor2){
										menor2 = resp;
									}
									cont2 = 0;
									n_tabuas2 = 0;
									n2 = 0;
									free(idx2);
									idx2 = NULL;
									idx2 = (long long int*)malloc(max * sizeof(long long int));
									break;
								}
							}else{
								bool3 = 1;
							}
						}
						if(tabuas[i] + tabuas[k] == comprimento){
							for(int j = 0; j < doadas; j++){
								if(k != idx2[j]){
									bool3 = 1;
								}else{
									bool3 = 0;
									break;
								}
							}
							for(int j = 0; j < doadas; j++){
								if(i != idx2[j]){
									bool4 = 1;
								}else{
									bool4 = 0;
									break;
								}
							}if(bool3 == 1 && bool4 == 1){
								cont2 += 1;
								n_tabuas2 += 2;
								idx2[n2] = i;
								//printf("%d ", idx2[n2]);
								n2 += 1;
								idx2[n2] = k;
								//printf("%d\n", idx2[n2]);
								n2 += 1;
								if(cont2 * largura_tabua * comprimento == largura * comprimento){
									resp = n_tabuas2;
									if(resp < menor2){
										menor2 = resp;
									}
									cont2 = 0;
									n_tabuas2 = 0;
									n2 = 0;
									free(idx2);
									idx2 = NULL;
									idx2 = (long long int*)malloc(max * sizeof(long long int));
									break;
								}
							}else{
								bool3 = 1;
								bool4 = 1;
							}
						}
					}
				}
			}
		}
        if(menor == 1){
            printf("%d\n", menor);
        }
        else {
            if (menor1 == menor2 && menor2 == max) {
                printf("impossivel\n");
            } else {
                if (menor1 <= menor2) {
                    printf("%lld\n", menor1);
                }
                if (menor2 < menor1) {
                    printf("%lld\n", menor2);
                }
            }
        }
		free(tabuas);
		tabuas = NULL;
		scanf("%lld %lld", &largura, &comprimento);
	}

	return 0;
}
