#include <stdio.h>


int main(){

	int i, saque, qt = 0;


	printf("Quanto deseja sacar: ");
	scanf("%d", &saque);

	while(saque >= 100){

		saque -= 100;
		qt += 1;

	}if(qt >= 1){

		printf("%d nota de R$ 100.00\n", qt);
		qt = 0;

	}

	while(saque >= 50){

		saque -= 50;
		qt += 1;

	}if(qt >= 1){

		printf("%d nota de R$ 50.00\n", qt);
		qt = 0;

	}

	while(saque >= 20){

		saque -= 20;
		qt += 1;

	}if(qt >= 1){

		printf("%d nota de R$ 20.00\n", qt);
		qt = 0;

	}

	while(saque >= 10){

		saque -= 10;
		qt += 1;

	}if(qt >= 1){

		printf("%d nota de R$ 10.00\n", qt);
		qt = 0;

	}

	while(saque >= 5){

		saque -= 5;
		qt += 1;

	}if(qt >= 1){

		printf("%d nota de R$ 5.00\n", qt);
		qt = 0;

	}

	while(saque >= 2){

		saque -= 2;
		qt += 1;

	}if(qt >= 1){

		printf("%d nota de R$ 2.00\n", qt);
		qt = 0;

	}

	while(saque >= 1){

		saque -= 1;
		qt += 1;

	}if(qt >= 1){

		printf("%d nota de R$ 1.00\n", qt);
		qt = 0;

	}

	return 0;

}
