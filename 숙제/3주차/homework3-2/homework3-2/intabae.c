#include <stdio.h>
void main ( ) {
	int	a[5]={10,20,30,40,50};
	int b[5]={57,47,25,18,42};
	int temp[5];
	temp = a;
	a = b;
	b = temp;

	printf("배열 a = {%d,%d,%d,%d,%d}\n",a[0],a[1],a[2],a[3],a[4]);
	printf("배열 b = {%d,%d,%d,%d,%d}\n",b[0],b[1],b[2],b[3],b[4]);
}