#include <stdio.h>

int main(void)

{
	int h;
	int m;

	printf("Input your original time :  ");
	scanf("% d % d", h, m);
	
	if ((h > 0) && (m > 45))
		printf("New time : %d h %d m", h, m-45);
	else if ((h>1) && (m<45))
		printf("New time : %d h %d m", h-1, m+60-45);
	else if ((h<1) && (m<45))
		printf("New time : %d h %d m", h +24 - 1, m + 60 - 45);
	
	return 0;

}