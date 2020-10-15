#include <stdio.h>

/* array example using pointers */

int main()
{
	int array[10], i;

	/* initialize loop with variables */
	for (i = 0; i < 10; i ++)
	{
		*(array + i) = i;
	}

	/* display elements of loop */
	for (i = 0; i < 10; i++)
		printf("element - %d : %d\n", i, *(array + i));

	return 0;
}
