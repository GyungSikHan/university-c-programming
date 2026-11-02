#include <stdio.h>

int main()
{
	int kor, eng, mathe, age;
	char name1[10], name2[10];

	printf("이니셜을 입력하시오");
	scanf("%s", name1);
	printf("당신의 이니셜은 %s입니다\n\n", name1);

	printf("[kor]\t[eng]\t[math]\t점수입력");
	scanf("%d%d%d", &kor, &eng, &mathe);
	printf("성적의 합계는 %d입니다\n", kor + eng + mathe);
	printf("성적의 평균은 %.6f입니다\n", (kor + eng + mathe) / 3.0);

	printf("당신의 이릅은 무엇입니까?");


	
	
	
	/*
	char ch[10];

	printf("이름의 첫 글자를 3자리의 영문자로 입력하세요\n");
	scanf("%s", ch);
	printf("당신의 이니셜은 %s입니다.\n", ch);

	return 0;*/

	/*float su;
	printf("실수를 입력받아 출력하세요\n");
	scanf("%f", &su);
	printf("su = %6.3f", su);
	return 0;*/
	
	/*int kor, eng, math, sum;

	printf("[kor]\t[eng]\t[math]\t점수 입력:");
	scanf("%d%d%d", &kor, &eng, &math);
	sum = kor + eng + math;
	
	printf("\n[kor]%d\n[eng]%d\n[math]%d\n[합계]%d\n", kor, eng, math, sum);

	return 0;*/

	/*int d1, d2;
	double f1, f2;
	double re1, re2;
	printf("정수 두 개 입력:\n");
	scanf("%d%d", &d1, &d2);
	printf("실수 두 개 입력:");
	scanf("%1f%1f", &f1, &f2);

	re1 = (d1 + d2) / 2.0;
	re2 = (f1 + f2) / 2;
	printf("\n정수의 평균%.2f\n", re1);
	printf("실수 평균%.2f\n", re2);
	return 0;*/

	/*int i = 28;
	int j = 77;
	double d = 135.7979;
	char c = 'A';

	printf("%d%#o%#X\n", j, j, j);
	printf("%d%d%d\n", 10, 010, 0x10);

	
	printf("%5d\n", i);
	printf("%5c\n", c);
	printf("%-5d%-5d\n", i, i);
	printf("%08d\n", i);
	printf("%8.2f\n", d);
	printf("%100%%success\n");
	return 0;*/
}
#include <stdio.h>

 int main()
{
	 int su1;
	 float su2;

	 su1 = 5;
	 ++su1;
	 printf("++su1 = %d\n", su1);
	 su1 = 5; su1++;
	 printf("su1++ = %d\n", su1);
	 su2 = 12.3;
	 ++su2;
	 printf("++su2 = %f\n", su2);
	 su2 = 12.3;
	 su2++;
	 printf("su2++ = %f\n", su2);


	 /*int num;

	 printf("점수를 입력하시오");
	 scanf("%d", &num);
	 if (!((num > 0) && (num <= 100)))
		 printf("입력 범위를 벗어 났습니다.\n");*/

	/* int su1, su2;

	 su1 = su2 = 5;
	 printf("su1 + 1=%d\n", su1 += 1);
	 printf("su1 - 1=%d\n", su1 -= 1);
	 printf("su1 / su2=%d\n", su1 /= su2);
	 printf("su1 * su2=%d\n", su1 *= su2);
	 printf("su1 / su2=%d\n", su1 /= su2);
	 printf("su1 %% su2=%d\n", su1 %= su2);*/


	 /*float su1 = 3.01, su2 = 3.0;

	 printf("변수 su1과 su2의 크기 비교 결과: %d\n", su1 <= su2);
	 printf("변수 su1과 su2의 크기 비교 결과: %d\n", su1 >= su2);
	 printf("변수 su1과 su2의 크기 비교 결과: %d\n", su1 == su2);
	 printf("변수 su1과 su2의 크기 비교 결과: %d\n", su1 != su2);
	 printf("변수 su1과 su2의 크기 비교 결과: %d\n", su1 < su2);
	 printf("변수 su1과 su2의 크기 비교 결과: %d\n", su1 > su2);*/

	/*int su1 = 20, su2 = 3;

	printf("%d + %d = %d\n", su1, su2, su1 + su2);
	printf("%d - %d = %d\n", su1, su2, su1 - su2);
	printf("%d * %d = %d\n", su1, su2, su1 * su2);
	printf("%d / %d = %d\n", su1, su2, su1 / su2);
	printf("%d %% %d = %d\n", su1, su2, su1 % su2);*/
}
#include <stdio.h>
int main()  
{
	int su1 = 123;
	char ch = 'a';
	float su2 = 12.345;

	printf("변수 su1의크기	:%d byte\n", sizeof(su1));
	printf("문자형 자료형의 크기	:%d byte\n", sizeof(char));
	printf("수식(su1+su2)의 크기	:%d byte\n", sizeof(su1+su2));
	printf("실수 1.23456의 크기	:%d byte\n", sizeof(1.23456));
	printf("문자형 상수'a'의 크기	:%d byte\n", sizeof('a'));



	/*int op = 30, result;
	result = op << 3;
	printf("30을 좌측으로 3비트 이동시킨 결과 = %d\n", result);*/

	/*int su1 = 15;
	su1 = ~su1;    
	printf("su1의 비트 부정 : %d\n", su1);//부호비트가 1이면 음수 0이면 양수 ~면 부호 바꿔주고 +1을 하면 값이 나온다*/
	
	/*int su;
	su = 8;
	(su % 2 == 0) ? printf("%d : 짝수\n", su):
					printf("%d : 홀수\n", su);
	su = 9;
	(su % 2 == 0) ? printf("%d : 짝수\n", su):
					printf("%d : 홀수\n", su);*/
} 