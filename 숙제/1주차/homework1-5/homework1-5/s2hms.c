#include <stdio.h>
void main ( ) {
	int s0, s1, m1, h1;

	printf("초를 입력해 주세요 : ");
	scanf("%d", &s0);

	h1 = s0/3600;
    m1 = s0%3600/60;
	s1 = s0%60;

	printf("%d초는 %d시간 %d분 %d초 입니다.", s0, h1, m1, s1);
}