#include <stdio.h>
void main ( ) {
	int r;  float pl = 3.14;

		printf("반지름을 입력해 주세요 : ");
		scanf("%d", &r);

		printf("반지름이 %d인 원의 넓이는 %.2f이고 둘레는 %.2f 입니다.\n",r, r*r*pl, r*2*pl);
		
}