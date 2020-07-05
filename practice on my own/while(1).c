#include <stdio.h>

int main(void)
{
	char ch;

		while (1)
		{
			ch = getchar();
			printf("%c%d", ch,ch);
			
		}
	return 0;
}

//getchar abc\n 을 하면, a,b,c,\n을 차례대로 읽는다.
//\n의 ACSII코드는 10이다.
//while(1)하면 무조건 참이므로 계속 돔,
//getchar ()