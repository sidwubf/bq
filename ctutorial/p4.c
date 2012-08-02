#include <stdio.h>

int sum(int a, int b);

int
main()
{
	int a = 1, b = 2;
	int c;
	c = sum(a, b);
	printf("%d\n", c);
	return 0;
}

int
sum(int a, int b)
{
	int result;
	result = a + b;
	return result;
}
