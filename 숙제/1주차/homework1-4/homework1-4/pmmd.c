#include <stdio.h>
void main ( ) {
	float a, b;
	printf("ù ��° ���� �Է��ϼ��� : ");
	scanf("%f", &a);

	printf("�� ��° ���� �Է��ϼ��� : ");
	scanf("%f", &b);

	printf("%.3f + %.3f = %.3f\n",a, b, a+b);
	printf("%.3f - %.3f = %.3f\n",a, b, a-b);
	printf("%.3f * %.3f = %.3f\n",a, b, a*b);
	printf("%.3f / %.3f = %.3f\n",a, b, a/b);
}