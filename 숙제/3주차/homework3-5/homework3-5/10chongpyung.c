#include <stdio.h>
void main ( ) {
	int a=0,b=0, st[10]={0};
	double c;
	
	for (a=1; a<=10; a++) {
		printf("%d�� �л��� ������ �Է��ϼ��� : ",a);
		scanf("%d",&st[a]);
		b=b+st[a];
	}
	c=b/10.0;
	printf("�Է��� 10���� ������ %d���̰� ����� %.1f�� �Դϴ�.\n",b,c);
}