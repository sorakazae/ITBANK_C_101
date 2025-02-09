#include <stdio.h>
#define size 15
int data[size]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};

void BS(int key) { // 배열안에서 key값을 이진탐색 해주는 함수
	int st=0, mid, end=size-1;
	while(st<=end) {
		mid=(st+end)/2;
		if(data[mid]==key) {
			printf("%d번은(는) 원소에 있습니다.\n", mid);
			return;
		}
		else if(data[mid]>key)
			end = mid-1;
		else if(data[mid]<key)
			st = mid+1;
	}
	printf("%d번은(는) 배열에 없습니다.\n", key);
}
void main ( ) {
	BS(2);
	BS(14);
	BS(32);
}
/*
#define size 5
int data[size] = {5,3,2,4,1};
void print( );
void selectionsort( ) { // 배열의 자료를 선택정렬 해주는 함수
	int x, y;
	for(x=0; x<size-1; x++) {
		for(y=x+1; y<=size-1; y++) {
			if(data[x]>data[y]) {
				int temp = data[x];
				data[x] = data[y];
				data[y] = temp;
			}
		}
	}
}
void boublesort( ) { // 배열의 자료를 거품정렬 해주는 함수
	int x, y;
	for(x=0; x<size-1; x++) {
		for(y=0; y<size-1-x; y++) {
			if(data[y]>data[y+1]) {
				int temp = data[y];
				data[y] = data[y+1];
				data[y+1] = temp;
			}
		}
	}
}

void main( ) {
	print( ); // 배열의 data를 출력하는 함수
	boublesort ( );
	print( ); // 배열의 data를 출력하는 함수
}
void print( ) {
	int x;
	for(x=0; x<=4; x++) {
		printf("data[%d]=%d\n", x, data[x]);
	}
}


/*void main( ) {
	int data[4]={7,2,1,9};
	int x=1;

	printf("data[1]=%d\n", data[x]);
	printf("data[2]=%d\n", data[data[1]]);
	printf("data[3]=%d\n", data[5-(x*2)]);
	for(x=0; x<=3; x++) {
		printf("반복문으로 data[%d]=%d\n", x, data[x]);
	}
}




/*void main ( ) {
	int a[4];
	int b[4]={10,20,30,40};         // 10, 20, 30, 40
	int c[4]={10};                  // 10, 0, 0, 0       초기값을 하나라도 넣으면 나머지는 0으로 바뀜
	int d[4]={0};                   // 0, 0, 0, 0
	int e[]={10,20,30,40};
	
	a[0]=11;
	a[1]=22;
	a[2]=33;
	a[3]=44;
	printf("a[0]=%d\n", a[0]);
	printf("a[1]=%d\n", a[1]);
	printf("a[2]=%d\n", a[2]);
	printf("a[3]=%d\n", a[3]);
	
	printf("sizeof(a)=%d\n", sizeof(a));
	printf("sizeof(a[0])=%d\n", sizeof(a[0]));
}

/*
int a;               // 전역변수
extern int b=0;        // 외부변수

void func( ) {
	printf("a = %d\n", a);
	a = 20;
}
void main ( ) {
	printf("a = %d\n", a);
	a = 10;
	func( );
	printf("a = %d\n", a);
}
*/