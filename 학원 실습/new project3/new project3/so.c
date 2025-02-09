#include <stdio.h>
void main ( ) {
	int a = 2;

	if(a==1) {           // ;(세미콜론) 쓰면 안 됨
		printf("에이는 일이다.\n");   // 여기까지가 한 문장이다.
		printf("안녕~\n");
	}       //이 중괄호는 if가 참이면  실행하고 거짓이면 실행하지 않는다.            //영역 선택 후 Alt+F8 누르면 자동 줄 맞춤
}
/*void main( ) {
	int a = 10;
	int *b;      // int의 주소값만 저장할 수 있는 변수 b //int와 int*은 다름//int형 변수의 주소값만 저장 가능 다른것도 마찬가지
	printf(" a = %d\n", a);              // a의 값을 출력
	printf("&a = %p\n", &a);        // a의 주소값을 출력

	b = &a;    // a의 주소값을 b에 저장

	printf(" b = %p\n", b);              // b의 값을 출력
	printf("&b = %p\n", &b);        // b의 주소값을 출력
	printf("*b = %d\n", *b);           // b의 역참조 값을 출력 // b에 저장되어있는 주소에 있는 값을 출력
}*/