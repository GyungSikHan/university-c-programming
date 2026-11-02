#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/*int main()//다차원 공간, 게임 맵이나 경도, 위도 저장할때 사용
{
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };//=={{1,2,3],{4,5,6},{7,8,9}}
	int i, j;
	for (i = 0; i < 3; ++i) {
		for (j = 0; j < 3; ++j) {
			printf("배열 요소 a[%d][%d]: %d\n", i, j, arr[i][j]);
		}
	}
}*/

//로또
void check(int *arr) {
	int i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = i + 1; j < 6; j++)
		{
			while (arr[i] == arr[j])
				arr[i] = rand() % 45 + 1;
		}
	}
}//중복값 검사, 주소를 넘겼을때 주소를 받기위해 *(포인트)을 써준다. 메인함수에서 쓰이는 배열을 주소로 받아서 다른함수에서 그래로 쓸수있다

void select_sort(int *arr) {
	int i, j, tmp = 0;
	for (i = 0; i < 5; i++)
	{
		for (j = i + 1; j < 6; j++)
		{
			if(arr[i]>arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}//생성한 변수값 정렬

int main()
{
	printf("===로또 추천 프로그램");
	int arr[6];
	int i, tmp = 0;
	srand((unsigned)time(NULL));
	for (i = 0; i < 6; i++)
		arr[i] = rand() % 45 + 1;
	check(arr);//check라는 함수에 인자값을 넘긴다, 배열이름=해당 배열의 시작주소
	select_sort(arr);

	for (i = 0; i < 6; i++)
		printf("%4d", arr[i]);

	printf("\n");
}
/*외우기!!
{C언어에서 데이터를 교환하는 공식}
tmp=A
A=B
B=tmp
#tmp는 데이터를 임시저장하는 용도로 쓰임
*/




/*void main()
{
	int jumsu[5] = { 82,85,76,79,96 };
	int tmp, i, j;
	for (i = 0; i < 4; i++) {
		for (j = i + 1; j < 5; j++) {
			if (jumsu[i] < jumsu[j]) {
				tmp = jumsu[j];
				jumsu[j] = jumsu[i];
				jumsu[i] = tmp;
			}
		}
	}
	int rank[5];
	for (int i = 0; i < 5; i++)
	{
		rank[i] = 1;
		for(int j=0;j<5;j++)
		{
			if (jumsu[i] < jumsu[j])
				rank[i]++;
		}
		printf("%d점\t", jumsu[i]);
		printf("%d등\n", rank[i]);
	}
}*/



/*void main()
{
	int jumsu[5] = { 82,85,76,79,96 };
	int rank[5];
	for (int i = 0; i < 5; i++)
	{
		rank[i] = 1;
		for(int j =0;j<5;j++)
		{
			if (jumsu[i] < jumsu[j])
				rank[i]++;
		}
		printf("%d", rank[i]);
	}
	printf("\n");
}*/


/*int main()
{
int num[5] = { 4,8,2,7,6 };
int tmp, i, j;
for (i = 0; i < 4; i++) {
for (j = i + 1; j < 5; j++) {
if (num[i] > num[j]) {
tmp = num[i];
num[i] = num[j];
num[j] = tmp;//swap작업(데이터 교환작업)
}
}
}
for (i = 0; i < 5; i++)
printf("%d", num[i]);
printf("\n");
}*/