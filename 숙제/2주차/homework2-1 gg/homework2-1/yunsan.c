#include <stdio.h>
void main ( ) {
	int f,s; 
	char ys , pl , mi , mu , di , re ;
	
	printf("ù��° ������ �Է��ϼ��� : ");
	scanf("%d", &f);

	printf("�ι�° ������ �Է��ϼ��� : ");
	scanf("%d", &s);

	printf("�ϰ���� ������ �Է��ϼ��� : ");
	scanf("%c" ,&ys);

		if  ('ys' = 'pl') {
			printf("%d + %d = %fl �Դϴ�.", f, s, f+s);
		}
		else if('ys' = 'mi') {
			printf("%d - %d = %fl �Դϴ�.",f,s,f-s);
		}
		else if ('ys' = 'mu') {
			printf("%d * %d = %fl �Դϴ�.",f,s,f*s);
		}
		else if ('ys' = 'di') {
			printf("%d / %d = %fl �Դϴ�.",f,s,f/s);
		}
		else if ('ys' = 're') {
			printf("%d % %d = %fl �Դϴ�.",f,s, f%s);
		}
}