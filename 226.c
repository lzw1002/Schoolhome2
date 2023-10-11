#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, b;
	printf("請輸入數字:\n");
	scanf("%d %d", &a, &b);
	if (a%b == 0)
	{
		printf("b是a的倍數\n");
	}
	else
	{
		printf("b不是a的倍數\n");
	}
	return 0;
}