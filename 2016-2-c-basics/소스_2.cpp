#include<stdio.h>
#include<stdlib.h>//rand함수(0~32767)까지 범위
#include<time.h>//srand 함수에서 사용 Seed값
				//원하는 난수의 범위 (rand()%n+1)   n은 원하는 범위값 입력하면 된다
/*void main()
{
	int random_num;
	srand((unsigned)time(NULL));//seed값 생성 공식
	random_num = rand();
	printf("%d\n", random_num);
}*/


void main()
{
	int random_num;
	srand((unsigned)time(NULL));//seed값 생성 공식
	for (int i = 0; i < 5; i++)
	{
		random_num = rand()%5+1;
		printf("%d\n", random_num);
	}
}