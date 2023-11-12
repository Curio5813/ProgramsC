#include <stdio.h>
#include <math.h>



int main(){

	int op;
	float x, y, z, mg, mp, ma, mh;

	printf("Quais o valores para x, y, z: ");
	scanf("%f %f %f", &x, &y, &z);


	printf("Calulcar: \n"
			"[1] => Média Geométrica\n"
			"[2] => Média Ponderada\n"
			"[3] => Média Harmônica\n"
			"[4] => Média Aritmética\n"
			"Opção desejada: ");
	scanf("%d", &op);

	if(op == 1){

		mg = pow(x * y * z, 1.0/3.0);
		printf("Sua Média Geométrica é igual a: %.2f", mg);

	}else if(op == 2){

		mp = (x + 2 * y + 3 * z) / 6.0;
		printf("Sua Média Ponderada é igual a: %.2f", mp);

	}else if(op == 3){

		mh = 1 / (1/x + 1/y + 1/z);
		printf("Sua Média Harmônica é igual a: %.2lf", mh);

	}else if(op == 4){

		ma = (x + y + z) / 3.0;
		printf("Sua Média Aritmética é igual a: %.2f", ma);

	}

	return 0;

}
