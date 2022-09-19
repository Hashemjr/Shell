#include <stdio.h>

void Factorial(){
	
	int number, sum = 1;

	printf("\nEnter a number: ");
	scanf("%d", &number);
	getchar();

	for(int i=1; i<= number; i++){
		sum *=i;
	}

	printf("Result is: %d\n", sum);
}
