﻿#include <stdio.h>
//조건 연산자에 대해서 배워보자!
//조건 연산자가 많이 이용되는 이유는 코드를 짧고 간결하게 짤 수 있기 때문이다.
//논리적으로도 부합하기 때문

int main(void)
{
	int x = -50, y = 30;

	int absoluteX = (x > 0) ? x : -x;
	/*
	(x > 0) ? x : -x;  가 조건 연산자
	(x > 0)가 True의 값을 가진다면 x의 값이 반환되고
	(x > 0)가 False의 값을 가진다면 -x의 값이 반환된다는 의미
	True의 값일 경우 x 그 자체의 값이 반환되어 조건문과 같이 0보다 큰 x 
	즉, 양수 x가 반환될 것이고
	False의 값일 경우 -x 의 값이 반환되어 x 의 값 -50 에 - 가 붙은 -(-50)이
	반환되어 -x 값 즉, 50이 반환될 것이다
	한마디로 절대값 (Absolute)
	*/

	int max = (x > y) ? x : y;
	/*
	x가 y보다 크면 x값이 나오고 y보다 작으면 y값이 나온다
	항상 최대값을 반환하게 됨
	*/
	
	int min = (x < y) ? x : y;
	/*
	x가 y보다 작으면 x값이 나오고 y보다 크면 y값이 나온다
	항상 최소값을 반환하게 됨
	*/

	printf("xの絶対値は　%dです。\n", absoluteX);

	printf("xと　ｙの中で　最大値は　%dです。\n", max);

	printf("xと　ｙの中で　最小値は　%dです。\n", min);

	return 0;
}