#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int A,B;
	scanf("%d%d", &A,&B);

	if ((0 < A) && (0 < B))
		printf("1");
	else if ((0 > A) && (0 < B))
		printf("2");
	else if ((0 > A) && (0 > B))
		printf("3");
	else
		printf("4");

	return 0;

}