#include <stdio.h>

int main()
{
	int a, b, *ptra, *ptrb, sum;
	printf("Input a: ");
	scanf("%d", &a);
	printf("Input b: ");
	scanf("%d", &b);

	ptra = &a;
	ptrb = &b;

	sum = *ptra + *ptrb;

	printf("Output sum: %d\n", sum);


	return 0;
}
