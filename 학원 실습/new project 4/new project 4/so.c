#include <stdio.h>
void main ( ) {
	int a, b;
	for(a=1; a<=5; a++) {
		for(b=1; b<=6-a; b++) {
			printf("★");
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
		printf("%d번 점수 입력 : ", a);
		scanf("%d", &in);
		sum = sum+in;                      //총합 구하기
		if(max<in)                              //최대 값 구하기
			max = in;
		if(min>in)                              //최소 값 구하기
			min = in;
		if(in%2==0)
			cnt++;
	}
	printf("평균 : %.lf\n", sum/10.0);
    printf("최대 : %d\n", max);
	printf("최소 : %d\n", min);
	printf("짝수의 갯수 : %d\n", cnt);


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
		printf("항복하려면 0 입력 : ");
		scanf("%d", &a);
	}
	printf("훗~\n");
}




/*void main( ) {
	int jumsu;
	printf("점수 입력 : " );
	scanf("%d", &jumsu);

	if(jumsu>=90) {
		printf("A학점 이네?\n");
	}
	else if(jumsu>=80) {                //if문의 jumsu>=90때문에 &&jumsu<90 이 포함되어 있다.
		printf("B학점 이군\n");
	}
	else if(jumsu>=70) {
		printf("c?\n");
	}
	else {
		printf("재수강! ㅅㄱ\n");
	}
}*/