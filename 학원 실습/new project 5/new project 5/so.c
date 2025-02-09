#include <stdio.h>
void func(int k) {
	printf("k = %d\n", k);
	if(k<3) {          // 재귀호출 횟수와 경우를 정함
		func(k+1);     // 자기자신을 재귀호출
	}
	printf("k = %d\n", k);
}
void main( ) {
	func(1);
}


/*void swap1(int x, int y) {        // call by value(값에 의한 함수호출)
	int temp = x;
	x = y;
	y = temp;
}
void swap2(int *x, int*y) {       // call by adress(call by pointer) 주소에 의한 함수 호출
	int temp = *x;
	*x = *y;
	*y = temp;
}
void main ( ) {
	int x=10, y=20;
	printf("swap 전 x=%d, y=%d\n", x, y);
	swap1(x, y);
	printf("swap1 후 x=%d, y=%d\n", x, y);
	swap2(&x, &y);
	printf("swap2 후 x=%d, y=%d\n", x, y);
}



/*
void func (int a) {
	printf("a=%d\n", a);       //10
	a = 20;
	printf("a=%d\n", a);       //20
	return a;
}
void main ( ) {
	int a=10;
	printf("a=&d\n", a);        //10
	func(a);
	printf("a=%d\n", a);        //10
}

/*int abs(int x) {
	if(x<0) {
		return -x;
	}
	return x;
}
void main ( ) {
	int a;
	a = abs(7);
	printf("a = %d\n", a);
}


/*void func(double y);            // 함수의 원형(프로토타입, 선언)  안쓰면 error

void main ( ) { 
	func(1.5);                   // 함수의 호출
	func(2.5);                   // 함수의 호출
}
void func(double y) {                  // 사용자가 정의한 함수
	printf("y=%f\n");
}*/