#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    char buff[100];

    if (getcwd(buff, sizeof(buff)) > 0) {
	printf("Your current directory: %s\n", buff);

    }

    else {
	printf("Error\n");
	return -1;
    }


    return 0;
}
