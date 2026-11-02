#include<stdio.h>

int main()
{
	int kor, eng, mat, sum, arv;
	char name[20];
	sum = kor + eng + mat;
	arv = sum / 3;
	while (1) {
		printf("===============================");
		printf("\t\tMenu");
		printf("===============================");
		printf("\t1. 학생이름 입력\n");
		printf("\t2. 성적 3과목 입력\n");
		printf("\t3. 학생이름 출력\n");
		printf("\t4.합계 출력\n");
		printf("\t5. 평균 출력\n");
		printf("\t6. 종료");
		printf("===============================");
	}
	scanf("%s%d%d%d", name, &kor, &eng, &mat);
	switch (switch_on)
	{
	case 1 :printf("")
	default:
		break;
	}

}//풀다만것
/*#include<stdio.h>
int main()
{
	int su, sum = 0;
	for (su = 1; su <= 10; su++)//식1과 증감식은 생략가능
		sum += su;
	printf("sum = %d\n", sum);
}*/
/*#include<stdio.h>
int main()
{
	int su, sum = 0;
	for (su = 1; su <= 10; su++)
	{
		if (su % 2 == 1)
			sum += su;
	}
	printf("sum = %d\n", sum);//짝수들만 더하기

}*/
/*#include<stdio.h>
int main()
{
	int su, sum = 0;
	for (su = 1; su <= 10; su+=2)
		sum += su;
	printf("sum = %d\n", sum);//위의 식보다 쉬운 방법
}*/
/*#include<stdio.h>
int main()
{
	int su = 1, sum = 0;
	for (; su <= 10;)
		sum += su;//or sum += su++로 써두된다.
	su++;
	printf("sum = %d\n", sum);
}*/

/*#include<stdio.h>
int main()
{
	int su, sum = 0;
	for (su = 10; su >= 1; su--)
		sum += su;
	printf("sum = %d\n", sum);
}*/

/*int su1, su2, odd_sum = 0, even_sum = 0;

for (su1 = 1, su2 = 2; (su1 <= 100 && su2 <= 100); su1 += 2, su2 += 2)
{
odd_sum += su1;
even_sum += su2;
}
printf("홀수의 합 = %d\n", odd_sum);
printf("짝수의 합 = %d\n", even_sum);*/

#include<stdio.h>

int main()
{
	int a, b;
	for (a = 2; a < 10; a++)
	{
		for (b = 1; b < 10; b++)
			printf("%d * %d =%d\n", a, b, a*b);
	}
/*{
	int su1, su2;

	for (su1 = 1; su1 <= 5; su1++)
	{
		for (su2 = 1; su2 <= 5; su2++)
			printf("su1=%d\t su2=%d\n", su1, su2);
	}
	/*int su1, su2, sum = 0;

	for (su1 = 1; su1 <= 10; su1++) {
		for (su2 = 1; su2 <= 10; su2++)//이중 for문에서 상,하위 모두 10번 작동하게 설정된 경우 상위 for문이 1바퀴 돌때 하위 for문이 10바퀴 돌므로 총 100번 회전함
			sum += 1;
	}
	printf("sum = %d\n", sum);*/
}