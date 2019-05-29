/*
자료형이란 그때마다 바뀐다
자료형이 필요없을경우 Void형을 사용한다
자료형은 세 종류로 나뉜다
Primitive (원시 자료형) [char(문자 표현) , int , float , double(숫자 표현) , void(자료형 자체가 없음)]
Derivied (정의 자료형) [array , pointer , function]
User defined (파생 자료형) [enum , structure , union]
*/

/*
Variables Data Types [데이터 타입]
int(integer) char(character) float(float) double(double)
*/

/*
위의 자료형을 이용하여 연봉계산 프로그램을 만들어보자
*/

#include <stdio.h>
#define MONTHS 12
/*
상수에 대한 정의 ex) MONTHS 12 를 define(정의) 한다
예를들어 원주율 , 사각형을 구하는 공식 등등 이미 정해진 수학적 법칙들을
상수에 대한 정의를 이용해준다
*/

int main(void)
{
	double monthSalary = 1000.5;
	/*
	double이라는 실수형의 월급 변수 선언
	*/

	printf("$ %.2f", monthSalary * MONTHS);
	/*
	monthSalary에 상수인 MONTHS를 곱하여 연봉을 구함
	*/

	return 0;
}