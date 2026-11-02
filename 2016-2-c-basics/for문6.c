#include<stdio.h>

int main()
{
	int a, b, sum, re1, re2;
	printf("두 정수를 입력하시오");
	scanf("%d%d")
}

/*int a, b, result1, result2;
printf("정수 두개를 입력하시오");
scanf("%d%d", &a, &b);

if (a < b)
result1 = b;
if (a > b)
result1 = a;
result2 = result1 % 2;
if (result2==0)
printf("%d가 더 큰 짝수입니다.\n", result1);*/

/*int a, b, c, max;
printf("3수를 입력하세요");
scanf("%d%d%d", &a, &b, &c);

if (a > b)
max = a;
if (a < b)
max = b;
if (c > max)
max = c;
printf("가장 큰 수는 %d입니다\n", max);*/

/*int a, b, max;
printf("두 정수를 입력하세요");
scanf("%d%d", &a, &b);

if (a > b)
printf("%d가 큰 값입니다.\n", a);
if (a < b)
printf("%d가 큰 값입니다.\n", b);
if (a == b)
printf("%d와 %d는 같은 값 입니다.\n", a, b);*/

/*int a;
printf("정수입력");
scanf("%d", &a);

if (a % 2 == 0)
printf("짝수입니다\n", a);
if (a % 2 != 0)
printf("홀수입니다\n", a);*/

/*int a;
scanf("%d", &a);
if (a < 0)
printf("입력하신 값의 절대값은 %d입니다.\n", a* -1);
if (a >= 0)
printf("입력하신 값의 절대값은 %d입니다.\n", a);*/

/*int a;
printf("정수입력");
scanf("%d", &a);

if (a % 3 == 0)
printf("3의 배수입니다\n");
if (a % 3 != 0)
printf("3의 배수가아닙니다\n");*/

/*int su;

printf("10 보다 큰 정수를 입력하세요");
scanf("%d", &su);
if (su <= 10)
printf("10 이하의 수를 입력하였습니다!\n");
printf("%d", su);*/

/*int num1, num2;
scanf("%d", &num1);
num2 = num1 % 2;
if (num2 == 0)
printf("짝수");
if (num2!= 0)
printf("홀수");*/

/*#include<stdio.h> 
int main(int argc, char * argv[])
{   
	int num1=1, num2=0;   
	if(num1) 
		printf("참");
	if (num2)
		printf("거짓");
}

#include<stdio.h> 
int main(int argc, char * argv[]) 
{  
	if(1)   
		printf("참이므로 출력");   
	if(0)  
		printf("거짓이므로 출력안함");
}*/

/*int num1, num2;
scanf("%d%d", &num1, &num2);
if (num1 > num2)
printf("%d", num1 > num2);*/
/*
int kor, eng, mat, avr;

printf("3과목 점수를 입력하세요");
scanf("%d%d%d", &kor, &eng, &mat);

avr = (kor + eng + mat) / 3;
if (avr < 70)
printf("불합격\n");
else if (kor < 60)
printf("불합격\n");
else if (eng < 60)
printf("불합격\n");
else if (mat < 60)
printf("불합격\n");
else
printf("합격\n");*
/*int a;
printf("정수입력");
scanf("%d", &a);
if (a >= 0)
{
if ((a % 2) == 0)
printf("%d: 양의 짝수\n", a);
else
printf("%d: 양의 홀수\n", a);
}
else
printf("%d: 음수\n", a);*/
/*int a, b, max, min;
printf("정수두개입력");
scanf("%d%d", &a, &b);

if (a > b)
{
max = a;
min = b;
}
else
{
max = b;
min = a;
}
printf("max=%d, min=%d\n", max, min);*/
/*int a, b;
scanf("%d%d", &a, &b);
if (a > b)
printf("참이므로%d", a > b);
else
printf("거짓이므로 %d", a > b);*/
