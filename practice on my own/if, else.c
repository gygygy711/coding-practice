#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char grade;
	int score;
	int start;

	scanf("%c%d", &grade,&score);

	if ((grade == 'A') || (score > 90))
	{
		start = 0;
		for (start = 0; start < 5; start++)
		{
			printf("You have passed the exam.\n");
		}
	}
	else
	{
		printf("You have failed the exam.\n");
	
	}
	return 0;

}