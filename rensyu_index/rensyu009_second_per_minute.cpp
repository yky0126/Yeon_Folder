#include <stdio.h>
#define SECOND_PER_MINUTE 60
/*
초를 입력받아서 몇분 몇초인지 계산해주는 프로그램을 작성해보자!
*/

int main(void)
{
	int input = 1000;
	/*
	1000초가 입력으로 들어옴
	*/

	int minute = input / SECOND_PER_MINUTE;

	int second = input % SECOND_PER_MINUTE;
	/*
	입력값을 60초로 나눈 나머지를 초라고 삼는 것
	*/

	printf("%d秒は　%d分　%d秒です。\n", input, minute, second);

	return 0;

}