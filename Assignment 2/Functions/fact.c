#include <stdio.h>

void main(){
	
	int number, sum = 1;

	printf("Please Enter a number: ");
	scanf("%d", &number);

	for(int i=1; i<= number; i++){
		sum = i*sum;
	}

	printf("The factorial of number %d = %d\n", number , sum);
}
