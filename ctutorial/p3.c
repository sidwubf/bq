#include <stdio.h>

int
main()
{
	char c = 'a';
	char *pc;
	pc = &c;
	printf("%c \n", *pc);

	return 0;
}
