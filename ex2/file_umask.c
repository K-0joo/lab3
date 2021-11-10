/* file_umask.c */

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
main(int argc, char *argv[])
{
	int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH | S_IWOTH;
	umask(0);
	if (creat("test1.txt", mode) < 0) {
		perror("creat: test1.txt");
		exit(1);
	}
}
