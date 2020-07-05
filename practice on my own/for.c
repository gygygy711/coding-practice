#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	char alphabet[10];
	int start;

	scanf("%s", &alphabet);

	start = 0;
	for (start = 0; start < 5; start++)
	{
		printf("%s\n", alphabet);
	}

	return 0;

}