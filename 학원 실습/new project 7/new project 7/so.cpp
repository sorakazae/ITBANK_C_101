#include <stdio.h>
void main ( ) {
	char *data = "�����ٶ󸶹ٻ�";
	char data2[3] = {'a','b','c'};

	puts(data);
	puts(data+1);
	puts(data+2);
	puts(data+3);
	puts(data+4);

	puts(data2);
}


/*
#include <string.h>  // ���ڿ� ó���� ���õ� �Լ��� �ִ� ���
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

	printf("d1 = %s\n", d1);  // ���ڿ� ���1
	puts(d1);                 // ���ڿ� ���2
	myprint(d1);
}


/*
void main ( ) {
	int data[2][3]={10,20,30,40,50,60};
	int (*ip)[3];  // ip�� int[3]�� ����ų�� �ִ� ������
	ip = data;

	printf("data=%p\n",data);
	printf("data+1=%p\n", data+1);

	printf("*data=%p\n",*data);
	printf("*(data+1)=%p\n",*(data+1));
}

/*
void main ( ) {
	int data[3]={10,20,30};
	// �迭�� �̸��� �迭�� �ִ� ù��° ������ �ּҰ��� �����ϴ� ������ �����
	int *ip = data;
	// data = ip;  //data�� ��������� ����Ұ�.
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

	short **jp;         // short�� �������� ������(��ø ������)

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
	ip = &jp;  x     // int�� ������ �ּҿ� int�� �ּҰ��� �ּҴ� �ٸ���.
	ip = *jp;  x
	*ip = a;   o     // int�� �ּҰ��� ������ �ϸ� int.   *****Ʋ��...  
	*ip = &a;  x     // int�� �ּҰ��� int�� �����Ϳ�
	*ip = jp;  x
	*ip = *jp; o
}
*/