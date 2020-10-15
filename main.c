#include <stdio.h>

int main()
{
	int i = 10, *i2 = &i;
	printf("value of address i: %d\n", *(&i));
	printf("value of pointer i2: %d\n", *i2);
	printf("address of i: %p\n", &i);
	printf("address of i2: %p\n", &i2);
	printf("address of i through pointer i2: %p\n", *(&i2));
	return 0;
}
