#include <stdio.h>

int
*TAB()
{
	int temp;
	printf("%p\n", &temp);
	return (&temp);
}

void
Victim()
{
	int *ptr;
	printf("%p\n", &ptr);
	ptr = TAB();
	printf("%p\n", &ptr);
	*ptr = 42;
	printf("%p\n", &ptr);
}

int
main()
{
	Victim();
	return 0;
}
