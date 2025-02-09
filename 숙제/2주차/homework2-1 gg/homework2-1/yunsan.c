#include <stdio.h>
void main ( ) {
	int f,s; 
	char ys , pl , mi , mu , di , re ;
	
	printf("첫번째 정수를 입력하세요 : ");
	scanf("%d", &f);

	printf("두번째 정수를 입력하세요 : ");
	scanf("%d", &s);

	printf("하고싶은 연산을 입력하세요 : ");
	scanf("%c" ,&ys);

		if  ('ys' = 'pl') {
			printf("%d + %d = %fl 입니다.", f, s, f+s);
		}
		else if('ys' = 'mi') {
			printf("%d - %d = %fl 입니다.",f,s,f-s);
		}
		else if ('ys' = 'mu') {
			printf("%d * %d = %fl 입니다.",f,s,f*s);
		}
		else if ('ys' = 'di') {
			printf("%d / %d = %fl 입니다.",f,s,f/s);
		}
		else if ('ys' = 're') {
			printf("%d % %d = %fl 입니다.",f,s, f%s);
		}
}