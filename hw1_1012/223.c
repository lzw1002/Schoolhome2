#include <stdio.h>

int main()
{
	double a, b, c;
	printf("�п�J���N�T�Ӽ�:\n");
	scanf("%lf %lf %lf", &a, &b, &c);

	if (a >= b && a >= c)
	{
		printf("%.21f �̤j�O\n", a);
		if (b > c)
		{
			printf("%.21f �̤p�O\n", c);
		}
		else
		{
			printf("%.21f �̤p�O\n", b);
		}
	}
	else if (b >= a && b >= c)
	{
		printf("%.21f �̤j�O\n", b);
		if (a > c)
		{
			printf("%.21f �̤p�O\n", c);
		}
		else
		{
			printf("%.21f �̤p�O\n", a);
		}
	}
	else
	{
		printf("%.21f �̤j�O\n", c);
		if (a > b)
		{
			printf("%.21f �̤p�O\n", b);
		}
		else
		{
			printf("%.21f �̤p�O\n", a);
		}
	}

}