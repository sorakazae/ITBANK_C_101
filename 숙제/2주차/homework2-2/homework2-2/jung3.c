#include <stdio.h>
void main ( ) {
	int a, b, c;

		printf("ù��° ������ �Է��ϼ��� : ");
		scanf("%d", &a);

		printf("�ι�° ������ �Է��ϼ��� : ");
		scanf("%d", &b);

		printf("����° ������ �Է��ϼ��� : ");
		scanf("%d", &c);

		if (a>b && b>c) {
			printf("ũ������� ����ϸ� : %d, %d, %d �Դϴ�.\n",a ,b ,c );
		}
		else if (a>b && c>b) {
			printf("ũ������� ����ϸ� : %d, %d, %d �Դϴ�.\n",a ,c ,b );
		}
		else if (b>a && a>c) {
			printf("ũ������� ����ϸ� : %d, %d, %d �Դϴ�.\n",b ,a ,c );
		}
		else if (b>a && c>a) {
			printf("ũ������� ����ϸ� : %d, %d, %d �Դϴ�.\n",b ,c ,a );
		}
		else if (c>b && b>a) {
			printf("ũ������� ����ϸ� : %d, %d, %d �Դϴ�.\n",c ,b ,a );
		}
		else if (c>a && a>b) {
			printf("ũ������� ����ϸ� : %d, %d, %d �Դϴ�.\n",c ,a ,b );
		}
}