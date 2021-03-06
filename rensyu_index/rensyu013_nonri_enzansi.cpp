﻿//논리 연산자에 대해서 배워보자!
#include <stdio.h>

int main(void)
{
	int x = 50, y = 30;

	printf("xは　ｙよりは大きく、yは　40未満ですか？\n 答えは　%d\n", (x > y) && (y < 40));
	/*
	위의 경우 && 는 and 즉, 그리고 라는 의미를 가지고 있다.
	고로, x는 y보다 `크고` 40 미만 입니까? 라는 질문을 던졌을때
	y값이 30 이므로 True 대답 (숫자 1)이 출력된다. 
	*/

	printf("xが　ｙよりは小さい。もしくは、ｙが　３０ですか？\n 答えは　%d\n", (x < y) || (y == 30));
	/*
	위의 경우 || 는 or 즉, 또는 이라는 의미를 가지고 있다.
	고로, x는 y보다 작거나 `또는` y는 30 입니까? 라는 질문을 던졌을때
	x는 y보다 값이 크지만  y 는 30 의 값을 지니므로 True 대답 (숫자 1)이 출력된다.
	*/

	printf("xの値は　50ではないですか？\n 答えは　%d\n", x != 50);
	/*
	위의 경우 != 는 not 즉, 부정의 의미를 가지고 있다.
	고로, x의 값이 50이 `아닙니까`? 라는 질문을 던졌을때
	x의 값은 50 이므로 False 대답 (숫자 0)이 출력된다.
	*/
	
	return 0;
}