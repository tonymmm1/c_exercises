#include <stdio.h>
#include <string.h>

void changePosition(char *ch1, char *ch2)
{
	char tmp;
	tmp = *ch1;
	*ch1 = *ch2;
	*ch2 = tmp;
}

void charPermu(char *cht, int stno, int endno)
{
	int i;
	if (stno == endno)
		printf("%s ", cht);
	else
	{
		for (i = stno; i <= endno; i++)
		{
			changePosition((cht + stno), (cht + i));
			charPermu(cht, stno + 1, endno);
			changePosition((cht + stno), (cht + i));
		}
	}
}

int main()
{
	char string[] = "abcd";
	int n = strlen(string);

	charPermu(string, 0, n - 1);


	return 0;
}
