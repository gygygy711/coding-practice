#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char szInput[10];

	printf("Enter a sentence: ");
	scanf("%s", szInput);
	printf("The sentence entered is %lu characters long.\n", strlen(szInput));

	return 0;
}