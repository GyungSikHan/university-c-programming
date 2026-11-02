#include <stdio.h>

int main()
{
	char name1[30], name2[30];
	printf("이름을 입력하세요!");
	scanf("%s", name1);
	printf("이름을 입력하세요!");
	scanf("%s", name2);
	printf("나의 이름은 %s입니다.\n", name1);
	printf("나의 이름은 %s입니다.\n", name2);

	/*
	int num1, num2, sum;

	printf("정수 2개를 입력하세여...\n");
	scanf("%d%d", &num1, &num2);//scanf에서 제어문자 하나만 쓰기 나머지는 하지말기  줄을 줄이기위해 제어문자를 두개를 한번에 쓰고 주소 값을 두개를 한번에 쓴다
	sum = num1 + num2;
	printf("두 수의 합은 %d 입니다.", sum);*/
}
#include <stdio.h>

int main()
{/*
	int val1 = 100;
	double val2 = 200.0;
	char val3 = 'A';

	printf("val1은 정수이며 값은 %d 입니다.\n", val1);
	printf("val2은 정수이며 값은 %f 입니다.\n", val2);
	printf("val3은 정수이며 값은 %c 입니다.\n", val3);*/

	/*
	double pi = 3.141592;
	int radius = 7;
	double result = pi * radius*radius;

	printf("pi는 %f입니다.\n", pi);
	printf("원의 반지름은 %d 입니다.\n", radius);
	printf("원의 넓이는 %.3f 입니디\n",result);
	*/
	/*
	char lower = 'a';
	char upper = 'a';
	char number = '1';

	printf("입력문자 : %c\n", lower);
	printf("ASCII 코드 10진수 : %d\n\n", lower);
	printf("ASCII 코드 16진수 : %x\n\n", lower);

	printf("입력문자 : %c\n", upper);
	printf("ASCII 코드 10진수 : %d\n\n", upper);
	printf("ASCII 코드 16진수 : %x\n\n", upper);

	printf("입력문자 : %c\n", number);
	printf("ASCII 코드 10진수 : %d\n\n", number);
	printf("ASCII 코드 16진수 : %x\n\n", number);*/
	/*
	int val = 100;
	char grade = 'A';

	printf("점수:%d, 등급:%c\n", grade);*/
	

	int val = 2;
	double radius = 3.141592;
	double result = val * val * radius;
	printf("val은%f\n", val);
	printf("원의반지름은%d 입니다.\n", radius);
	printf("원의넓이는%.3f 입니다.\n", result);

	return 0;
}