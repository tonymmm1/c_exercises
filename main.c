#include <stdio.h>

int main()
{
	int m = 10, *z=&m;
	printf("value of z(*m): %d\n", *z);
	printf("value of m: %d\n", m);
	printf("address of m: %p\n", &m);
	printf("address of z: %p\n", &z);

	return 0;
}
