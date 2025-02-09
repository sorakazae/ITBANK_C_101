#include  <stdio.h>             //예제 꼭 하기,숙제 꼭 하기
void main ( ) {
	int mit, nop;
	
	printf("밑변 입력 : ");
    scanf("%d" , &mit);

	printf("높이 입력 : ");
	scanf("%d" , &nop);

	printf("밑변이 %d이고 높이가 %d인 삼각형의 넓이는 %d\n", mit, nop, mit*nop/2);
}
 //%나머지 연산자 정수에 대해서만 사용



/*void main ( ) {
	int a;  char b;   float c;  double d;
	printf("정수 입력 : ");
	scanf("%d" , &a);    //정수 쓸때 &붙여야 됨
	printf("a = %d\n" , a);

	printf("문자 입력 : ");
	fflush(stdin);         scanf("&c" , &b);
	pritf("b = %c\n" , b);

	printf("float 입력 : ");
	scanf("%f" , &c);    //float은 %f
	printf("c = %f\n" , c);

	printf("double 입력 : ");
	scanf("%lf" , &d);   //double은 %lf
	printf("d = %f\n" , d);
}



/*void main ( ) {
	printf("##%d##\n" , 10);
	printf("##%6d##\n" , 1000);  //실수,정수,문자,문자열 전부 가능
	printf("##%6d##\n" , 500);   //오른쪽 정렬
	printf("##%6d##\n" , 20000);
	printf("\n");
	printf("##%-6d##\n" , 1000);
	printf("##%-6d##\n" , 500); //왼쪽 정렬
	printf("##%-6d##\n" , 20000);
	printf("\n");
	printf("##%06d##\n" , 1000);
	printf("##%06d##\n" , 500); //빈공간 0처리
	printf("##%06d##\n" , 20000);
	printf("\n");
	printf("%f\n" , 12.3456);   // 실수만 됨
	printf("%.0f\n" , 12.3456);
	printf("%.3f\n" , 12.3456);
	printf("%.15f\n" , 12.3456);
}



/*void main ( ) {
	printf("%d\n" , 10);    // 10진수
	printf("%o\n" , 10);    // 8진수
	printf("%x\n" , 10);    // 16진수

	printf("%f\n" , 123456.7890123);   // float 소수점 이하 6번째 자리까지 출력 짤린 수는 짤린자리에서 반올림
	printf("%lf\n" , 123456.7890123);  // double
	printf("%e\n" , 123456.7890123);  
	printf("%le\n" , 123456.7890123);

	printf("%s\n" , "코리아팀");    //%s 문자열 출력
}



/*void main ( ) {
	int a=10;   char b='X';   double c=3.14;
	printf("안녕\n");
	printf("10+20\n");
	printf("%d\n" , 10+20);   // %d 출력 중단 후 ,뒤 정수 값 출력 (int,long,short)
	printf("%c\n" , 'Y');        // %c                      문자           (char)
	printf("%f\n" , 12.34);     // %f                      실수           (float,double)
	printf("%d\n" , a);
	printf("%c\n" , b);
	printf("%f\n" , c);

	printf("a = %d 입니다. \n", a);

	printf("b = %c, c = %f\n" , b, c);

	printf("및변이 %d인 정사각형의 넓이는 %d다\n" , a , a*4);

	printf("반지름이 7인 원의 넓이 = %f \n" , 7*7*3.1415924);
}


/*void main ( ) {
	char a, b;
	printf("첫 번째 문자 입력 : ") ;
	a = getchar( );

	printf("두 번째 문자 입력 : ");
	fflush(stdin);      // 입력버퍼에 남아있는 값을 지워줌 (중요)
	b = getchar( );

	printf("입력한 문자는 ");
	putchar(a);
	printf("와 ");
    putchar(b);
	printf("입니다. \n");
}



/*#include  <conio.h> //비표준입출력함수가 있는 헤더파일
void main( ) {
	char data;
	printf("문자입력 : ");
	data = getch( );
    data = getche( );
	data = getchar( );
	printf("입력한 문자 = ");
	putchar(data);
    printf("입니다. \n");
}


/*void main ( ) {
	char data = 'X' ;
    putchar( 'A' ) ;              // char형 상수를 출력
	putchar(66) ;               // 아스키코드로 출력 (66은 B)
	putchar(data) ;             // char형 변수의 값을 출력
	putchar( '\n' ) ;           // 줄바꿈 문자 출력

	// 잘못된 사용예
	// putchar('ab') ;          // 두글자는 출력불가
	// putchar("a") ;           // 문자열은 출력불가
	// putchar(B) ;             // 변수 B가 없다면 출력불가
	// putchar(752) ;          // 아스키 코드는 0~127



/*void main ( ) {
		
	char data;
	data = 'A' ;     // 문자 취급 하려면 '를 써 주어야 됨 문자A 
	data = "A";     // "를 쓰면 문자열 취급 문자열A
}
*/