#include <stdio.h>
void main ( ) {
	int a=0,b=0, st[10]={0};
	double c;
	
	for (a=1; a<=10; a++) {
		printf("%d번 학생의 점수를 입력하세요 : ",a);
		scanf("%d",&st[a]);
		b=b+st[a];
	}
	c=b/10.0;
	printf("입력한 10명의 총점은 %d점이고 평균은 %.1f점 입니다.\n",b,c);
}