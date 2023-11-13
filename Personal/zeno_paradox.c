#include <stdio.h>
#include <stdlib.h>


int main(){

	long double distance = 50, zeno = 0;

	long long int turtle = 50, cont = 0;

	while(zeno < turtle){

		turtle += 13;
		zeno += distance;
		distance /= 2;
		cont += 1;

		if(cont == 1000000){

			printf("This is a convergent geometric progression, and its "
					"value converges to %.2llf\n\n", zeno);
			return printf("Zeno will never reach the turtle. Altogether "
					"Zeno ran %llf metres in %lld leaps.", zeno, cont);

		}

	}printf("Zeno needs %lld leaps to reach the turtle and will reach the "
			"turtle at the distance %llf metres.", cont, zeno);

	return 0;
}
