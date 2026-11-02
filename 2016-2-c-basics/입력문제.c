#include <stdio.h>
int main()
{
	int num1, num2, num3, age;
	float su1;
	char name1[10];
	char name2[10];

	printf("실수 입력:");
	scanf("%f", &su1);
	printf("입력하신 실수는 %.2f 입니다.\n", su1);

	printf("이니셜 입력:");
	scanf("%s", name1);
	printf("입력하신 이니셜은 %s 입니다.\n", name1);

	printf("3과목 성적 입력:");
	scanf("%d%d%d", &num1, &num2, &num3);
	printf("입력하신 성적의 합계는 %d 입니다.\n", num1 + num2 + num3);
	printf("입력하신 성적의 평균은 %.2f 입니다.\n", ((float)num1 + (float)num2 + (float)num3) / 3.0);

	printf("당신의 이름은 무엇입니까?");
	scanf("%s", name2);
	printf("당신의 나이는 몇 살 입니까?");
	scanf("%d", &age);
	printf("%s님의 나이는 %d살 입니다.\n", name2, age);


	return 0;

}