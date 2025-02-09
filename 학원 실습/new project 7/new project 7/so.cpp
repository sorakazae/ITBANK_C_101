#include <stdio.h>
void main ( ) {
	char *data = "가나다라마바사";
	char data2[3] = {'a','b','c'};

	puts(data);
	puts(data+1);
	puts(data+2);
	puts(data+3);
	puts(data+4);

	puts(data2);
}


/*
#include <string.h>  // 문자열 처리와 관련된 함수가 있는 헤더
void mycopy (char *x, char *y) {
	while(*y!=NULL) {
		*x = *y;
		x++, y++;
	}
	*x=NULL;
}
void main ( ) {
	char d1[ ]="korea";

	char *d2 = "korea";
	puts(d2);
	d2 = "japan";
	puts(d2);
	*d2 = 'z';

	*d1 = 'z';


	puts(d1);
	// d1 = "japan";
	d1[0]='j'; d1[1]='a'; d1[2]='p'; d1[3]='a'; d1[4]='n'; d1[5]=NULL;
	puts(d1);               // "japan"
	mycopy(d1, "korea");
	puts(d1);               // "korea"
	strcpy(d1, "china");
	puts(d1);               // "china"
}

/*
void myprint(char *x) {
	while(*x!=NULL) {
		printf("%c",*x);
		x++;
	}
	printf("\n");
}
void main ( ) {
	char d1[6]={'k','o','r','e','a','\0'};
	char d2[6]={'k','o','r','e','a',NULL};
	char d3[6]={'k','o','r','e','a'};
	char d4[6]="korea";
	char d5[ ]="korea";

	printf("d1 = %s\n", d1);  // 문자열 출력1
	puts(d1);                 // 문자열 출력2
	myprint(d1);
}


/*
void main ( ) {
	int data[2][3]={10,20,30,40,50,60};
	int (*ip)[3];  // ip는 int[3]을 가리킬수 있는 포인터
	ip = data;

	printf("data=%p\n",data);
	printf("data+1=%p\n", data+1);

	printf("*data=%p\n",*data);
	printf("*(data+1)=%p\n",*(data+1));
}

/*
void main ( ) {
	int data[3]={10,20,30};
	// 배열의 이름은 배열에 있는 첫번째 원소의 주소값을 저장하는 포인터 상수다
	int *ip = data;
	// data = ip;  //data가 상수임으로 변경불가.
	printf("data[0] = %p\n", &data[0]);
	printf("data = %p\n", data);
	printf("data+1 = %p\n", data+1);

	printf("*data = %d\n", *data);
	printf("*(data+1) = %d\n", *(data+1));
	printf("*(data+2) = %d\n", *(data+2));

	printf("ip[1] = %d\n", ip[1]);//20
	ip++;
	printf("ip[1] = %d\n", ip[1]);//30
	printf("ip[-1] = %d\n", ip[-1]);//10
}

/*
void func (int x1, int y1,int *x2, int *y2, int *x3, int *y3, int **x4, int **y4, int x5, int y5) {


}
void main ( ) {
	int a=10,b=20;
	int *ip=&a, *jp=&b;
	func(a, b, &a, &b, ip, jp, &ip, &jp, *ip, *jp);
}

/*
void main ( ) {
	short a=10;
	short *ip=&a;

	short **jp;         // short형 포인터의 포인터(중첩 포인터)

	short *********************s21;

	jp = &ip;

	kp = &jp;
}

/*void main ( ) {
	int a=10;
	int *ip;
	int *jp;

	ip = 10;   x
	ip = a;    x
	ip = &a;   o
	ip = jp;   o
	ip = &jp;  x     // int형 변수의 주소와 int형 주소값의 주소는 다르다.
	ip = *jp;  x
	*ip = a;   o     // int형 주소값을 역참조 하면 int.   *****틀림...  
	*ip = &a;  x     // int의 주소값은 int형 포인터에
	*ip = jp;  x
	*ip = *jp; o
}
*/