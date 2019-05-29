#include <stdio.h>

int main(void)

{

	int a = 10;

	int b = 20;

	printf("a = %dです。\n" , a);

	printf("b = %dです。\n" , b);

	printf("a + b = %dです。\n" , a + b);

	printf("a - b = %dです。\n" , a - b);

	printf("a * b = %dです。\n" , a * b);

	printf("a / b = %dです。\n" , a / b);
	/*
	나누기의 경우 C언어에서 이렇게 두개의 정수를 나누기를 하고 그 결과를 
	int형으로 출력하게 되면 위의 경우 몫만 출력이 되어 결과가 0으로 출력된다
	10/20은 몫이 0이고 나머지가 10이기 때문에 몫인 0만 출력이 된다.
	*/
	
	return 0;

}