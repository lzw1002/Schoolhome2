#include <stdio.h>

int main() 
{
	double D, C, G, P, T;
	printf("每天里程數約為多少:\n");
	scanf("%lf", &D);
	printf("汽油一加侖多少:\n");
	scanf("%lf", &C);
	printf("一加侖約可以走多少公里:\n");
	scanf("%lf", &G);
	printf("一天停車費:\n");
	scanf("%lf", &P);
	printf("過路費:\n");
	scanf("%lf", &T);

	double mix;
	mix = (D / G)*C + P + T;
	printf("一天總花費:%.2lf元\n", mix);
}