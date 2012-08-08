#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

char buf1[] = "abcdefghij";
char buf2[] = "ABCDEFGHIJ";

int
main()
{
	int fd;
	
	if ((fd = creat("file.hole", (S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH))) < 0)
		exit(-1);

	if (write(fd, buf1, 10) != 10)
		exit(-2);

	if (lseek(fd, 16384, SEEK_SET) == -1)
		exit(-3);

	if (write(fd, buf2, 10) != 10)
		exit(-4);

	exit(0);
}
