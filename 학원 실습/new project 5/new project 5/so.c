#include <stdio.h>
void func(int k) {
	printf("k = %d\n", k);
	if(k<3) {          // ���ȣ�� Ƚ���� ��츦 ����
		func(k+1);     // �ڱ��ڽ��� ���ȣ��
	}
	printf("k = %d\n", k);
}
void main( ) {
	func(1);
}


/*void swap1(int x, int y) {        // call by value(���� ���� �Լ�ȣ��)
	int temp = x;
	x = y;
	y = temp;
}
void swap2(int *x, int*y) {       // call by adress(call by pointer) �ּҿ� ���� �Լ� ȣ��
	int temp = *x;
	*x = *y;
	*y = temp;
}
void main ( ) {
	int x=10, y=20;
	printf("swap �� x=%d, y=%d\n", x, y);
	swap1(x, y);
	printf("swap1 �� x=%d, y=%d\n", x, y);
	swap2(&x, &y);
	printf("swap2 �� x=%d, y=%d\n", x, y);
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


/*void func(double y);            // �Լ��� ����(������Ÿ��, ����)  �Ⱦ��� error

void main ( ) { 
	func(1.5);                   // �Լ��� ȣ��
	func(2.5);                   // �Լ��� ȣ��
}
void func(double y) {                  // ����ڰ� ������ �Լ�
	printf("y=%f\n");
}*/