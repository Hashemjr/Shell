#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Rando(){
	
	srand(time(NULL));
	int random = rand();

	printf("\n%d\n", random);
}
