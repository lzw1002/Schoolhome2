#include <stdio.h>

int main()
{
	int x, square, cube;
	printf("x    squaaer    cube\n");
	for (x = 0;x<= 10;x++)
	{
		square = x * x;
		cube = x * x * x;
		printf("%d\t%d\t%d\n", x, square, cube);
	}
}