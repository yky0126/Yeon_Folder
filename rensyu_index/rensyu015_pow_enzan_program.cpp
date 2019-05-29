﻿#include <stdio.h>
//거듭제곱 연산 프로그램을 작성해보자! power [pow()] 를 이용해보자!
#include <math.h>
// pow() , abs() 와 같은 함수(이미 정해진 내용) 을 사용할때 라이브러리 형태로 제공되는 헤더

int main(void)
{
	double x = pow(2.0, 20.0);
	/*
	위와 같은 경우에는 왼쪽의 좌항의 숫자 2.0 가 20.0 만큼 거듭제곱 된다는 것
	*/

	printf("2の　20乗は　%.0fです。\n", x);
	/*
	2의 20제곱의 값을 소수점 0번째 자리의 실수로 표현한다. 
	즉, 소수점아래 자리를 뺀 수를 출력한다는 것.
	*/

	return 0;
}