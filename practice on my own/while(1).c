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

//getchar abc\n �� �ϸ�, a,b,c,\n�� ���ʴ�� �д´�.
//\n�� ACSII�ڵ�� 10�̴�.
//while(1)�ϸ� ������ ���̹Ƿ� ��� ��,
//getchar ()