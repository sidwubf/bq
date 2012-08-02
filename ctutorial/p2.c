#include <stdio.h>

int
main()
{
	int i = 4;
	int *x;
	x = &i;
	int *y;
	y = x;
	printf("i:%d x:%d y:%d\n", i, *x, *y);

	int a = 4;
	int *b;
	b = &a;
	int *c;
	b = c;
	printf("a:%d b:%d c:%d\n", a, *b, *c);

	return 0;
}
