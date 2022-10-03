#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    char buff[100];
    int des_file = open(argv[2], O_CREAT | O_WRONLY, 0644);
    int src_file = open(argv[1], O_RDONLY);
    int read_count;

    if (src_file == -1) {
	printf("No such file\n");
	return -1;
    }

    while ( (read_count = read(src_file, buff, 100)) > 0) {
	write(des_file, buff, read_count);
    }


    close(des_file);
    close(src_file);

    return 0;
}
