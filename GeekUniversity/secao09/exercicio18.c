#include <stdio.h>


int x, z, p = 1;


int ExponencialNaMao(){

	printf("Digite dois numeros para x e z: ");
	scanf("%d%d", &x, &z);

	for(int i = 0; i < z; i++){
		p *= x;

	}printf("%d", p);

}


int main(){

	ExponencialNaMao();

	return 0;

}
