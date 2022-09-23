#include <stdio.h>

void Fibonacci()
{	
	int num1 = 0 , num2 = 1, next, number;

	printf("\nEnter a number: ");
	scanf("%d", &number);
	getchar();
	
	printf("The Sequence is: ");
	printf("%d, %d, ", num1 , num2);

	for(int i = 1 ; i<number; i++){
		next = num1 + num2;
		
		if(i == number - 1){
			
			printf("%d\n", next);
			continue;
		}

		printf("%d, ", next);
		
		num1 = num2;
		num2 = next;	

	}

}
