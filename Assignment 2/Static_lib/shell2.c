#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "all.h"

int main()
{
	char prompt [] = "Let's hack> ";
	char* sentence = NULL ;
	size_t buffer = 100;
	sentence = (char*) malloc(100 * sizeof(char));

	printf("$ ./myFemtoShell\n\n");

	while(1){

		printf("%s",prompt);
		scanf("%[^\n]%*c" , sentence);

		if(strcmp(sentence, "exit") == 0){
			printf("Good Bye :)\n");
			printf("$\n");
			exit(0);
		}

		else if(strcmp(sentence , "rand") == 0){
			Rando();
			continue;
		}

		else if(strcmp(sentence , "fact") == 0){
			Factorial();
			continue;
		}

		else if(strcmp(sentence, "fib") == 0){
			Fibonacci();
			continue;
		}

		printf("\nYou said: %s\n", sentence);
	}

	free(sentence);
	return 0;
}
