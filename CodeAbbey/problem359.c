#include <stdio.h>


void find_3_numbers(){

	long long int x, y, z, cont = 0, bol = 0, a, b, c, prod;

	long long int n[3] = {100, 35, 3485};

	long long int r_a, r_b, r_c, r_p;

	while(cont < 3){

		for(x = 2; x <= n[cont]; x++)

			for(y = 2; y <= n[cont]; y++)

				for(z = 2; z <= n[cont]; z++)

					if(x != y && x != z && y != z){

						a = x * y;
						b = x * z;
						c = y * z;

						prod = x * y * z;

						r_a = n[cont] % a;
						r_b = n[cont] % b;
						r_c = n[cont] % c;
						r_p = prod % n[cont];


						if(r_a == 0 && r_b == 0 && r_c == 0 && r_p == 0){

							printf("%lld %lld %lld ", x, y, z);
							cont += 1;
							break;
						}


		}if(cont < 3){
			printf("%d ", 0);
			cont += 1;

		}


	}


}


int main(){

	find_3_numbers();

	return 0;

}
