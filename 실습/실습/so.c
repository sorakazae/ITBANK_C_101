#include <stdio.h>
void main ( ) {
int arr[10] = { 51, 45, 64, 35, 74, 25, 81, 22, 89, 15 };
int i, sum = 0; // sum은 총점을 저장하기 위한 변수
for(i=0; i<=9; i++ ) {
sum = sum + i;
}
printf("배열안에 있는 원소의 총합 : %d\n", sum);
printf("배열안에 있는 원소의 평균 : %.2lf\n", sum/10.0); // 자동 형 변환
}