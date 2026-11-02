#include<stdio.h>

int main()

{
	int a, b, result, sum;
	printf("몇통을 살것인가?");
	scanf("%d", &a);
	result = 5000;
	sum = result * a;

	if (a < 10)
		printf("금액 = %d입니다", sum);
	else if (a >= 10)
	{
		b =(result*a) -((result * a) / 10);
		printf("금액 = %d입니다", b);
	}

	/*int a, b, c, sum, arv;
	char A, B, C, D, F;
	printf("세 과목의 성적을 입력하세요");
	scanf("%d%d%d", &a, &b, &c);
	sum = a + b + c;
	arv = sum / 3;
	printf("합계 = %d, 평균 = %d\n", sum, arv);

	if (arv >= 90)
		printf("A\n");
	else if (arv >= 80)
		printf("B\n");
	else if (arv >= 70)
		printf("C\n");
	else if (arv >= 60)
		printf("D\n");
	else
		printf("F\n");

	return 0;*/
	
	

	/*int num1, num2, result, sum;
	printf("도시락 갯수를 입력하시오");
	scanf("%d", &num1);
	result = 2500;
	sum = result * num1;

	if (10 >= num1)
		printf("가격 = %d입니다", sum);
	else if (10 < num1)
	{
		num2 = sum - (num1 * 100);
		printf("가격 =%d입니다", num2);
	}*/


	/*int num1, num2, result;
	printf("이용 시간을 입력하세요");
	scanf("%d", &num1);
	result = 3000;
	if (30 >= num1)
		printf("요금 = %d 입니다", result);
	else if (30 < num1)
	{
		num2 = result + ((num1 - 30) * 500);
	printf("요금 = %d 입니다", num2);
	}*/



	/*int a;
	printf("정수를 입력하시오");
	scanf("%d", &a);

	if (a % 2 == 0)
		printf("%d는 짝수입니다", a);
	else
		printf("%d는 홀수입니다", a);
	*/
}
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
	int num, data;
	while (1)//while은 지정한 횟 수 만큼 코드를 반복 시킬 때 사용, ()안에 1은 참을 의미한다
	{
		printf("==============================================\n");
		printf("1. 데이터 입력\n");
		printf("2. 데이터 출력\n");
		printf("3. 종료\n");
		printf("==============================================\n");
		scanf("%d", &num);
		switch (num)
		{
		case 1:printf("데이터를 입력하세요\n");
			scanf("%d", &data);
			break;
		case 2:printf("%d", data);
			getch();
				break;
		case 3:exit(1);
		}
		system("cls");
	}
}//switch는 단일 문자나 정수 값만 쓸수있고, 문장이나 실수 값은 쓸수 없다.

 /*int a;
 scanf("%d", &a);

 switch (a)
 {
 case 0:printf("가위");
 break;
 case 1:printf("바위");
 break;
 case 2:printf("보");
 break;
 default: printf("종료");
 }*/

 /*int num, ret;
 scanf("%d", &num);
 ret = num % 3;
 switch (ret)
 {
 case 0: printf("3의 배수");
 break;
 default:printf("3의 배수 아니다");
 break;
 }*/

 /*char ch;
 scanf("%c", &ch);
 switch (ch)
 {
 case 'a':printf("a를 입력하세요");
 break;
 case 'A':printf("A를 입력");
 break;
 }*/
 /*int num;
 scanf("%d", &num);
 switch (num)
 {
 case 1 : printf("1입력");
 break;
 case 2: printf("2입력");
 break;
 default: printf("1,2 제외한 나머지 입력");
 }*/