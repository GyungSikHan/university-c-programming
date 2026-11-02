#include <stdio.h>

int main()
{

	/*int a, b, c, max;
	printf("3수를 입력하시오");
	scanf("%d%d%d", &a, &b, &c);
	
	max = a < b ? a : b;
	max = max < c ? max : c;
	printf("3수중 가장 큰 값은 %d입니다.\n", a);
	printf("3수중 가장 큰 값은 %d입니다.\n", a);
	printf("3수중 가장 큰 값은 %d입니다.\n", a);*/



	int a, b, max;
	printf(" 두 수를 입력하세요");
	scanf("%d%d", &a, &b);
	/*max = (a < b);더 쉽게 하는법*/ max = a > b ? a : b;   printf("%d\n", max);
	/*(max == 0) ? printf("2개의 정수중 큰 값은 %d입니다\n", a) :
		printf("2개의 정수중 더 큰 값은 %d입니다\n", b);*/


	/*
	int a;
	printf("수를 입력하세요");
	scanf("%d", &a);
	(a % 3 == 0) ? printf("3의 배수\n") :
		printf("3의 배수가 아닙니다");*/
	



	/*int a, b;
	
	printf("수를 입력하시오");
	scanf("%d", &a);
	(a % 2 == 0) ?
		printf("%d : 짝수\n", a):
		printf("%d : 홀수\n", a);
	
	printf("수를 입력하시오");
	scanf("%d", &b);
	(b % 2 == 0) ?
		printf("%d : 짝수\n", b) :
		printf("%d : 홀수\n", b);*/
	


	
	
	/*int a, b, large;

	printf("첫번째수를 입력하세요");
	scanf("%d", &a);
	printf("두번째수를 입력하세요");
	scanf("%d", &b);

	large = a > b ? a : b;

	printf("%d와%d중 큰수는 %d입니다\n", a, b, large);

	return 0;*/

	/*double a = 3.14;
	short b = 3;

	printf("int = %dbyte\n", sizeof(int));
	printf("short = %dbyte\n", sizeof(short));

	printf("변수a = %dbyte\n", sizeof(a));
	printf("변수b = %dbyte\n", sizeof(b));

	printf("정수상수5 = %dbyte\n", sizeof(5));
	printf("5+4 = %dbyte\n", sizeof(5+4));

	printf("실수상수123.12 = %dbyte\n", sizeof(123.12));
	printf("실수상수12312f = %dbyte\n", sizeof(123.12f));*/

	/*int a = 5, b = 2;
	double re;

	re = a / b;
	printf("%.2f\n", re);

	re = (double)a / b;
	printf("%.2f\n", re);

	re = (double)(a / b);
	printf("%.2f\n", re);*/
}