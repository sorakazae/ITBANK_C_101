#include <stdio.h>
void main ( ) {
	float a, b;
	printf("첫 번째 수를 입력하세요 : ");
	scanf("%f", &a);

	printf("두 번째 수를 입력하세요 : ");
	scanf("%f", &b);

	printf("%.3f + %.3f = %.3f\n",a, b, a+b);
	printf("%.3f - %.3f = %.3f\n",a, b, a-b);
	printf("%.3f * %.3f = %.3f\n",a, b, a*b);
	printf("%.3f / %.3f = %.3f\n",a, b, a/b);
}