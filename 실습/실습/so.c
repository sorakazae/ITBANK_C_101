#include <stdio.h>
void main ( ) {
int arr[10] = { 51, 45, 64, 35, 74, 25, 81, 22, 89, 15 };
int i, sum = 0; // sum�� ������ �����ϱ� ���� ����
for(i=0; i<=9; i++ ) {
sum = sum + i;
}
printf("�迭�ȿ� �ִ� ������ ���� : %d\n", sum);
printf("�迭�ȿ� �ִ� ������ ��� : %.2lf\n", sum/10.0); // �ڵ� �� ��ȯ
}