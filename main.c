#include <stdio.h>

int main()
{
	int array[10], i;
	for (i = 0; i < 10; i++)
	{
		array[i] = i;
		printf("element - %d : %d\n", i, array[i]);
	}

	return 0;
}
