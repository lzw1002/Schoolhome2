#include <stdio.h>

int main() {
	int a;
	printf("請輸入數字:\n");
	scanf("%d", &a);
	if (a % 2 == 1)
	{
		printf("為奇數\n");
	}
	else
	{
		printf("為偶數\n");
	}
	return 0;
}
