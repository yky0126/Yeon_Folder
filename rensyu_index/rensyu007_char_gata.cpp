﻿#include <stdio.h>

int main(void)
{
	char x = 'A';
	/*
	char형은 하나의 문자를 담는 공간이라고 할 수 있다
	*/
	
	printf("%c\n", x);
	/*
	%c는 하나의 캐릭터형을 출력해줄수 있도록 하는 약속
	캐릭터형은 내부적으로 숫자로 구성된다
	위의 선언에서 A대신 65라는 값을 입력해 출력해보면 A라는 값이 나옴
	그 이유는 A는 내부적으로 65라는 값을 지니고 있기 때문 (아스키 코드)
	char형을 int형으로 바꾸더라도 그 결과는 같다
	왜냐하면 출력하는 형태가 %c (캐릭터형) 이기 때문
	*/

	char y = 65;

	printf("%c\n", y);

	char z = 'B';

	printf("%c\n", z);
	/*
	%c를 정수형인 %d로 바꿔서 출력해보면
	z의 값은 66이라고 출력된다 이는 아스키 코드에서 대문자 B의 코드가
	66이기 때문이다
	*/

	return 0;

}