#include <stdio.h>

int main()
{
	int array[3], i, temp = 0;

	for (i = 0; i < 3; i++)
	{
		array[i] = i + 1;
		temp += i;
		printf("element - %d : %d\n", i, array[i]);
	}

	printf("sum: %d\n", temp);

	return 0;
}
