#include <stdio.h>
void main ( ) {
	int ko, en;
	printf("국어 점수를 입력하세요 : ");
	scanf("%d", &ko);

	printf("영어 점수를 입력하세요 : ");
	scanf("%d", &en);

	printf("당신의 평균 점수는 %.1f 입니다.\n", (ko+en)/2.0);
}