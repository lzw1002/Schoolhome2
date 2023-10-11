#include <stdio.h>

int main() {
	double weight, height, bmi;
	printf("輸入您的體重（公斤）：\n");
	scanf("%lf", &weight);

	printf("輸入您的身高（米）：\n");
	scanf("%lf", &height);

	bmi = weight / (height * height);
	printf("您的BMI值為：%.2lf\n", bmi);
	return 0;
}
