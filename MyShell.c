#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
			//system(sentence);
			exit(0);
		}

		printf("\nYou said: %s\n", sentence);
	}

	return 0;
}
