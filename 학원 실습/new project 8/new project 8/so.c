#include <stdio.h>
struct first {  // ����ü first�� ����
	int a;      // ������� 1          ����ü ����鼭 �ʱⰪ �ֱ� �Ұ�
	float b;    // ������� 2
};
void main ( ) {
	struct first ob={10,10.5};
	struct first *sp=&ob;
	printf("&ob=%p\n", &ob);
	printf("&ob.a=%p\n", &ob.a);
	printf("&ob.b=%p\n", &ob.b);
	printf("sp=%p\n", sp);

	printf("(*sp).a=%d\n",(*sp).a);     //*sp=ob
	printf("(*sp).b=%f\n",(*sp).b);  // . : �������ȣ�⿬����. ����ü ���� �ȿ��ִ� ���

	printf("sp->a=%d\n", sp->a);  //-> : .�������ȣ�� ������. ����ü�� �����Ͱ� ����Ű�� ����ü���� ���� ����� ȣ��� ���
	printf("sp->b=%f\n", sp->b);
}


/*
void main( ) {
	struct first ob, pb={55,5.5};   // struct first�� ���� ob������
	printf("sizeof(ob)=%d\n", sizeof(ob));
	//ob=10;
	ob.a=10;
	ob.b=3.14;

	printf("ob.a=%d\n", ob.a);
	printf("ob.b=%f\n", ob.b);
	printf("pb.a=%d\n", pb.a);
	printf("pb.b=%f\n", pb.b);
	pb=ob;    // ���� �ڷ����� ����ü �������� ����(��)����
	
}



/*
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int stage [11][11]={0};
void print( );

void main( ) {
	int x=0, y=5;
	char in;
	srand(time(NULL));
	while(1) {
		cnt++;
		if(cnt%30==0) {
			if(x==10 || stage[x+1][y]==1 {
				x=0, y=rand( )%11;
			}
			else if {
			stage[x][y]=0;
			x++;
		}
		stage[x][y]=1;
	print( );
	if(kbhit()) {
		in=getch();
		if(in==75) {
			stage[x][y]=0;
			y--;
		}
		else if(in=77) {
			stage[x][y]=0;
			y++;
		}
		else if(in==72) {
			stage[x][y]=0;
			x--;
		}
		else if(in==80) {
			stage[x][y]=0;
			x++;
		}
	}system("cls");
}



	void print( ) {
	int x, y;
	for(x=0; x<=10, y++) {
		if (stage[x][y]==0)
			printf("��");
		else if(stage[x][y]==1)
			printf("��");

/*
int *f1(int a[4], int b[3][4], int c[2][3][4]) {
	static int k[4]={10,20,30,40};
	return k;
}
void f2(int *a, int (*b)[4], int (*c)[3][4]) {
}
void main( ) {
	int x[4]={10,20,30,40};
	int y[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
	int z[2][3][4]= {77,88,99};
	int *pp;
	pp=f1(x,y,z);
	f2(x,y,z);
}

/*
void main( ) {
	int a=10;               // int�� ���� a
	const int b=20;         // int�� ��� b, ����� ���� b
	const int c=30;
	int *ip=&a;
	const int *jp=&b;   // const in�� �ּҰ��� ������ �� �ִ� ������ ���� jp

	int *const kp=&a;   // int�� �ּҰ��� �����ϴ� ������ ��� kp

	const int * const lp=&b;  // const int�� �ּҰ��� ������ �� �ִ� ������ ��� lp
}

/*
void main ( ) {
	int *a[2];         // int *�� �� ĭ¥�� �迭�� ������
	int (*b)[2];       // int [2]�迭�� �ּҸ� �����ϴ� ������

	int x[3]={10,20,30};
	int y[4]={40,50,60,70};

	a[0]=x;                      // 2���� �迭ó�� ����� �� ����.
	a[1]=y;
	printf("%d\n", a[0][0]);
	printf("%d\n", a[0][1]);
	printf("%d\n", a[0][2]);
	printf("%d\n", a[1][0]);
	printf("%d\n", a[1][1]);
	printf("%d\n", a[1][2]);
}
*/