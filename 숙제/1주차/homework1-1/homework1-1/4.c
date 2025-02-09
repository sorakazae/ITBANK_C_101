#include <stdio.h>
void main ( ) {
	int mb, np;

	printf("밑변의 길이를 입력하세요 : ");
	scanf("%d", &mb);

	printf("높이의 길이를 입력하세요 : ");
	scanf("%d", &np);

	printf("밑변이 %d이고 높이가 %d인 사각형의 넓이는 %d 둘레는 %d입니다.\n", mb ,np ,mb*np,(mb+np)*2);
}