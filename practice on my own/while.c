#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	char alphabet[10];
	int start;

	scanf("%s", &alphabet);

	start = 0;
	while (start < 5)
	{
		printf("%s\n", alphabet);
		start++;
	}
	return 0;

}