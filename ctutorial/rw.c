#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

#define BUFSIZE 4096

int
main()
{
	int n;
	char buf[BUFSIZE];
	
	while ((n = read(STDIN_FILENO, buf, BUFSIZE)) > 0)
		if (write(STDOUT_FILENO, buf, n) != n)
			exit(-1);

	if (n < 0)
		exit(-2);

	exit(0);
}
