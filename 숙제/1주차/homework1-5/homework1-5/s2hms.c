#include <stdio.h>
void main ( ) {
	int s0, s1, m1, h1;

	printf("�ʸ� �Է��� �ּ��� : ");
	scanf("%d", &s0);

	h1 = s0/3600;
    m1 = s0%3600/60;
	s1 = s0%60;

	printf("%d�ʴ� %d�ð� %d�� %d�� �Դϴ�.", s0, h1, m1, s1);
}