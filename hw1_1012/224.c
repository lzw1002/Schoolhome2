#include <stdio.h>

int main() {
	int a;
	printf("叫块计:\n");
	scanf("%d", &a);
	if (a % 2 == 1)
	{
		printf("计\n");
	}
	else
	{
		printf("案计\n");
	}
	return 0;
}
