#include <stdio.h>
void main ( ) {
	int a, b;
	for(a=1; a<=5; a++) {
		for(b=1; b<=6-a; b++) {
			printf("��");
		}
		printf("\n");
	}
}

/*
void main ( ) {
	int a=1, z;
	for(z=1; z<=9; z++) {
		for(a=1; a<=9; a++) {
			printf("%d*%d=%-2d ", z, a, z*a);
		}
		printf("\n");
	}
}




/*void main ( ) {
	int a;
	for(a=65; a<=90; a++) {
		printf("%c%c", a,155-a);
	}
	printf("\n");

}
	/*int sum=0, max=0, min=100, a, in, cnt=0;
	
	for(a=1; a<=10; a++) {
		printf("%d�� ���� �Է� : ", a);
		scanf("%d", &in);
		sum = sum+in;                      //���� ���ϱ�
		if(max<in)                              //�ִ� �� ���ϱ�
			max = in;
		if(min>in)                              //�ּ� �� ���ϱ�
			min = in;
		if(in%2==0)
			cnt++;
	}
	printf("��� : %.lf\n", sum/10.0);
    printf("�ִ� : %d\n", max);
	printf("�ּ� : %d\n", min);
	printf("¦���� ���� : %d\n", cnt);


/*void main ( ) {
	int a;

	for(a=1; a<=10; a++) {
		if(a%2==0) {
			printf("a = %d\n", a);
		}
	}
	for(a=1; a<=5; a++) {
			printf("a = %d\n", a*2);
	}
	for(a=2; a<=10; a=a+2) {
			printf("a = %d\n", a);
	}
	for(a=10; a>0; a=a-2) {
			printf("a = %d\n", a);
	}
	for(a=2; a!=12; a=a+2) {
			printf("a = %d\n", a);
	}
	for(a=1; a!=0; ) {
		printf("�׺��Ϸ��� 0 �Է� : ");
		scanf("%d", &a);
	}
	printf("��~\n");
}




/*void main( ) {
	int jumsu;
	printf("���� �Է� : " );
	scanf("%d", &jumsu);

	if(jumsu>=90) {
		printf("A���� �̳�?\n");
	}
	else if(jumsu>=80) {                //if���� jumsu>=90������ &&jumsu<90 �� ���ԵǾ� �ִ�.
		printf("B���� �̱�\n");
	}
	else if(jumsu>=70) {
		printf("c?\n");
	}
	else {
		printf("�����! ����\n");
	}
}*/