#include <stdio.h>

int main() 
{
	double D, C, G, P, T;
	printf("�C�Ѩ��{�Ƭ����h��:\n");
	scanf("%lf", &D);
	printf("�T�o�@�[�ڦh��:\n");
	scanf("%lf", &C);
	printf("�@�[�ڬ��i�H���h�֤���:\n");
	scanf("%lf", &G);
	printf("�@�Ѱ����O:\n");
	scanf("%lf", &P);
	printf("�L���O:\n");
	scanf("%lf", &T);

	double mix;
	mix = (D / G)*C + P + T;
	printf("�@���`��O:%.2lf��\n", mix);
}