#include <stdio.h>
/*
int형을 다른 진수로 바꾸는 법을 알아보자!
*/

int main(void)
{
	int x = 100;

	printf("10進数で出力 : %d\n", x );

	printf("8進数で出力 : %o\n", x);

	printf("１６進数で出力 : %x\n", x);
	/*
	%d 는 10진수
	%o 는 8진수
	%x 는 16진수
	*/

	return 0;
}