#include  <stdio.h>             //���� �� �ϱ�,���� �� �ϱ�
void main ( ) {
	int mit, nop;
	
	printf("�غ� �Է� : ");
    scanf("%d" , &mit);

	printf("���� �Է� : ");
	scanf("%d" , &nop);

	printf("�غ��� %d�̰� ���̰� %d�� �ﰢ���� ���̴� %d\n", mit, nop, mit*nop/2);
}
 //%������ ������ ������ ���ؼ��� ���



/*void main ( ) {
	int a;  char b;   float c;  double d;
	printf("���� �Է� : ");
	scanf("%d" , &a);    //���� ���� &�ٿ��� ��
	printf("a = %d\n" , a);

	printf("���� �Է� : ");
	fflush(stdin);         scanf("&c" , &b);
	pritf("b = %c\n" , b);

	printf("float �Է� : ");
	scanf("%f" , &c);    //float�� %f
	printf("c = %f\n" , c);

	printf("double �Է� : ");
	scanf("%lf" , &d);   //double�� %lf
	printf("d = %f\n" , d);
}



/*void main ( ) {
	printf("##%d##\n" , 10);
	printf("##%6d##\n" , 1000);  //�Ǽ�,����,����,���ڿ� ���� ����
	printf("##%6d##\n" , 500);   //������ ����
	printf("##%6d##\n" , 20000);
	printf("\n");
	printf("##%-6d##\n" , 1000);
	printf("##%-6d##\n" , 500); //���� ����
	printf("##%-6d##\n" , 20000);
	printf("\n");
	printf("##%06d##\n" , 1000);
	printf("##%06d##\n" , 500); //����� 0ó��
	printf("##%06d##\n" , 20000);
	printf("\n");
	printf("%f\n" , 12.3456);   // �Ǽ��� ��
	printf("%.0f\n" , 12.3456);
	printf("%.3f\n" , 12.3456);
	printf("%.15f\n" , 12.3456);
}



/*void main ( ) {
	printf("%d\n" , 10);    // 10����
	printf("%o\n" , 10);    // 8����
	printf("%x\n" , 10);    // 16����

	printf("%f\n" , 123456.7890123);   // float �Ҽ��� ���� 6��° �ڸ����� ��� ©�� ���� ©���ڸ����� �ݿø�
	printf("%lf\n" , 123456.7890123);  // double
	printf("%e\n" , 123456.7890123);  
	printf("%le\n" , 123456.7890123);

	printf("%s\n" , "�ڸ�����");    //%s ���ڿ� ���
}



/*void main ( ) {
	int a=10;   char b='X';   double c=3.14;
	printf("�ȳ�\n");
	printf("10+20\n");
	printf("%d\n" , 10+20);   // %d ��� �ߴ� �� ,�� ���� �� ��� (int,long,short)
	printf("%c\n" , 'Y');        // %c                      ����           (char)
	printf("%f\n" , 12.34);     // %f                      �Ǽ�           (float,double)
	printf("%d\n" , a);
	printf("%c\n" , b);
	printf("%f\n" , c);

	printf("a = %d �Դϴ�. \n", a);

	printf("b = %c, c = %f\n" , b, c);

	printf("�׺��� %d�� ���簢���� ���̴� %d��\n" , a , a*4);

	printf("�������� 7�� ���� ���� = %f \n" , 7*7*3.1415924);
}


/*void main ( ) {
	char a, b;
	printf("ù ��° ���� �Է� : ") ;
	a = getchar( );

	printf("�� ��° ���� �Է� : ");
	fflush(stdin);      // �Է¹��ۿ� �����ִ� ���� ������ (�߿�)
	b = getchar( );

	printf("�Է��� ���ڴ� ");
	putchar(a);
	printf("�� ");
    putchar(b);
	printf("�Դϴ�. \n");
}



/*#include  <conio.h> //��ǥ��������Լ��� �ִ� �������
void main( ) {
	char data;
	printf("�����Է� : ");
	data = getch( );
    data = getche( );
	data = getchar( );
	printf("�Է��� ���� = ");
	putchar(data);
    printf("�Դϴ�. \n");
}


/*void main ( ) {
	char data = 'X' ;
    putchar( 'A' ) ;              // char�� ����� ���
	putchar(66) ;               // �ƽ�Ű�ڵ�� ��� (66�� B)
	putchar(data) ;             // char�� ������ ���� ���
	putchar( '\n' ) ;           // �ٹٲ� ���� ���

	// �߸��� ��뿹
	// putchar('ab') ;          // �α��ڴ� ��ºҰ�
	// putchar("a") ;           // ���ڿ��� ��ºҰ�
	// putchar(B) ;             // ���� B�� ���ٸ� ��ºҰ�
	// putchar(752) ;          // �ƽ�Ű �ڵ�� 0~127



/*void main ( ) {
		
	char data;
	data = 'A' ;     // ���� ��� �Ϸ��� '�� �� �־�� �� ����A 
	data = "A";     // "�� ���� ���ڿ� ��� ���ڿ�A
}
*/