#include <stdio.h>

int main() {
	double weight, height, bmi;
	printf("��J�z���魫�]����^�G\n");
	scanf("%lf", &weight);

	printf("��J�z�������]�̡^�G\n");
	scanf("%lf", &height);

	bmi = weight / (height * height);
	printf("�z��BMI�Ȭ��G%.2lf\n", bmi);
	return 0;
}
