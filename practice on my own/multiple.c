#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int A, B, C, D, E, F;


	scanf("%d\n%d", &A, &B);
	
	C = A * (B % 10);
	D = A * (B % 100) - C;
	E = A * (B % 1000) - C - D;
	F = C + D + E;


	printf("%d\n%d\n%d\n%d\n", C,D/10,E/100,F);

	return 0;

}
