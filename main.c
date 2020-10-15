#include <stdio.h>

int main()
{
	int a, b, *ptra, *ptrb;
	printf("Input a: ");
	scanf("%d", &a);
	printf("Input b: ");
	scanf("%d", &b);

	ptra = &a;
	ptrb = &b;

	if (*ptra > *ptrb)
		printf("%d is the maximum number\n", *ptra);
	else if (*ptrb > *ptra)
		printf("%d is the maximum number\n", *ptrb);


	return 0;
}
