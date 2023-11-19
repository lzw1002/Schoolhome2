#include <stdio.h>

int main()
{
	double a, b, c;
	printf("叫块ヴ種计:\n");
	scanf("%lf %lf %lf", &a, &b, &c);

	if (a >= b && a >= c)
	{
		printf("%.21f 程琌\n", a);
		if (b > c)
		{
			printf("%.21f 程琌\n", c);
		}
		else
		{
			printf("%.21f 程琌\n", b);
		}
	}
	else if (b >= a && b >= c)
	{
		printf("%.21f 程琌\n", b);
		if (a > c)
		{
			printf("%.21f 程琌\n", c);
		}
		else
		{
			printf("%.21f 程琌\n", a);
		}
	}
	else
	{
		printf("%.21f 程琌\n", c);
		if (a > b)
		{
			printf("%.21f 程琌\n", b);
		}
		else
		{
			printf("%.21f 程琌\n", a);
		}
	}

}