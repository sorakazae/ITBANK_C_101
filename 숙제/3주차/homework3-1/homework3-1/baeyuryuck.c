#include <stdio.h>
#define size 5
void main ( ) {
	int arr[5];
	printf("1�� ���� �Է� �ϼ��� : ");
	scanf("%d", &arr[0]);
	printf("2�� ���� �Է� �ϼ��� : ");
	scanf("%d", &arr[1]);
	printf("3�� ���� �Է� �ϼ��� : ");
	scanf("%d", &arr[2]);
	printf("4�� ���� �Է� �ϼ��� : ");
	scanf("%d", &arr[3]);
	printf("5�� ���� �Է� �ϼ��� : ");
	scanf("%d", &arr[4]);

	printf("�迭���� {%d,%d,%d,%d,%d} �� �����Ǿ� �ֽ��ϴ�.\n", arr[0],arr[1],arr[2],arr[3],arr[4]);
	printf("�迭�� �������ϴ�.\n");

}