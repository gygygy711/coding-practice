#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	double A;
	double B;

	scanf("%d%d", &A, &B);

	double C = A / B;

	printf("%.20f", C);


	return 0;
}