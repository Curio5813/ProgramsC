#include <stdio.h>


int main(){

	double l, k, t1, t2, h, f1, f2, diff;

	scanf("%lf %lf %lf %lf %lf", &l, &k, &t1, &t2, &h);

	if(h == l){

		diff = 0.004701640;
		f1 = l;
		f2 = l + (k * t2) + diff * t1;

		printf("%.9lf %.9lf\n", f1, f2);

	}else if(h < l){

		f1 = h;
		f2 = h;

		printf("%.9f %.9f\n", f1, f2);

	}

	return 0;

}
