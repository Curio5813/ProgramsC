#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){


	char string1[52], string2[52];

	while((gets(string1), gets(string2) != EOF)){
		int tam = 0, maior = 0, a, b;
		size_t tam1 = strlen(string1);
		size_t tam2 = strlen(string2);
		if(tam1 >= tam2){
			for(size_t i = 0; string1[i] != '\0'; i++){
				for(size_t k = 0; string2[k] != '\0'; k++){
					if(string1[i] == string2[k]){
						a = i;
						b = k;
						while(string1[a] == string2[b]){
							if(a >= tam1 - 1 || b >= tam2 - 1){
								if(tam1 > 1 && tam2 > 1 && string1[a] == string2[b]){
									tam += 1;
									break;
								}
								else{
									tam += 1;
									break;
								}
							}
							tam += 1;
							a += 1;
							b += 1;
						}
					}
					if(tam > maior){
						maior = tam;
						tam = 0;
					}
					else{
						tam = 0;
					}
				}
			}
		}
		if(tam1 < tam2){
			for(size_t i = 0; string2[i] != '\0'; i++){
				for(size_t k = 0; string1[k] != '\0'; k++){
					if(string2[i] == string1[k]){
						a = i;
						b = k;
						while(string2[a] == string1[b]){
							if(a >= tam2 - 1 || b >= tam1 - 1){
								if(tam2 > 1 && tam1 > 1 && string2[a] == string1[b]){
									tam += 1;
									break;
								}
								else{
									tam += 1;
									break;
								}
							}
							tam += 1;
							a += 1;
							b += 1;
						}
					}
					if(tam > maior){
						maior = tam;
						tam = 0;
					}
					else{
						tam = 0;
					}
				}
			}

		}
		printf("%d\n", maior);

	}

	return 0;
}
