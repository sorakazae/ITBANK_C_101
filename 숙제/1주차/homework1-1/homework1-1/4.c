#include <stdio.h>
void main ( ) {
	int mb, np;

	printf("�غ��� ���̸� �Է��ϼ��� : ");
	scanf("%d", &mb);

	printf("������ ���̸� �Է��ϼ��� : ");
	scanf("%d", &np);

	printf("�غ��� %d�̰� ���̰� %d�� �簢���� ���̴� %d �ѷ��� %d�Դϴ�.\n", mb ,np ,mb*np,(mb+np)*2);
}