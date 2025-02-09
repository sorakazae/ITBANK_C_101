#include <stdio.h>
#define size 5
void main ( ) {
	int arr[5];
	printf("1번 수를 입력 하세요 : ");
	scanf("%d", &arr[0]);
	printf("2번 수를 입력 하세요 : ");
	scanf("%d", &arr[1]);
	printf("3번 수를 입력 하세요 : ");
	scanf("%d", &arr[2]);
	printf("4번 수를 입력 하세요 : ");
	scanf("%d", &arr[3]);
	printf("5번 수를 입력 하세요 : ");
	scanf("%d", &arr[4]);

	printf("배열에는 {%d,%d,%d,%d,%d} 이 보관되어 있습니다.\n", arr[0],arr[1],arr[2],arr[3],arr[4]);
	printf("배열을 뒤집습니다.\n");

}