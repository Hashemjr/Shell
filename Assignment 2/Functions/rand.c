#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){

	srand(time(NULL));
	int random = rand();

	printf("The random number is: %d\n", random);
}
