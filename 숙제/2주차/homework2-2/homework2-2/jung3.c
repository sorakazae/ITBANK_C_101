#include <stdio.h>
void main ( ) {
	int a, b, c;

		printf("첫번째 정수를 입력하세요 : ");
		scanf("%d", &a);

		printf("두번째 정수를 입력하세요 : ");
		scanf("%d", &b);

		printf("세번째 정수를 입력하세요 : ");
		scanf("%d", &c);

		if (a>b && b>c) {
			printf("크기순으로 출력하면 : %d, %d, %d 입니다.\n",a ,b ,c );
		}
		else if (a>b && c>b) {
			printf("크기순으로 출력하면 : %d, %d, %d 입니다.\n",a ,c ,b );
		}
		else if (b>a && a>c) {
			printf("크기순으로 출력하면 : %d, %d, %d 입니다.\n",b ,a ,c );
		}
		else if (b>a && c>a) {
			printf("크기순으로 출력하면 : %d, %d, %d 입니다.\n",b ,c ,a );
		}
		else if (c>b && b>a) {
			printf("크기순으로 출력하면 : %d, %d, %d 입니다.\n",c ,b ,a );
		}
		else if (c>a && a>b) {
			printf("크기순으로 출력하면 : %d, %d, %d 입니다.\n",c ,a ,b );
		}
}