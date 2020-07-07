#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	int a;
	int ascend;
	scanf("%d", &a);

	for (ascend = 1; ascend < 10; ascend++)
		printf("%d * %d = %d\n", a, ascend, a * ascend);

	return 0;

}