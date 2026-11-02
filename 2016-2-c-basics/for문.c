#include<stdio.h>

int main()
{
	int a, b, k;

	/*for (a = 1; a <= 3; a++)
	{
		for (b = 0; b < a; b++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (a = 3; a >0; a--)
	{
		for (b = 0; b < a; b++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (a = 3; a >= 1; a--)
	{
		for (b = 1; b <= 3; b++)
		{
			if (b < a)
				printf("");
			else
			printf("*");
		}
		printf("\n");
	}*/
	for (a = 1; a <= 3; a++)
	{
		for (k = 1; k <= 3; k++)
		{
			if (k < a)
				printf("");
		}
		for (b = 3; b >= 0; b--)
			printf("*");
	}
	printf("\n");
	/*int sum = 0, j;
	for (j = 1; sum < 10000; j++)
	{
		if(j%2!=0)
		{
			sum += j;
		}
	}
	j--;
	printf("%d\n", j);*/
	/*int i, sum = 0, sum1 = 0;
	for (i = 1; i <= 1000; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
			sum1 += i; //3ÀÇ¹è¼ö¸¸ °ñ¶ó³¿
		sum += i;
	}
	sum = sum - sum1;
	printf("%d\n", sum);*/


	/*int day, won = 1;
	for (day = 2; day <= 30; day++)
		won *= 2;
	printf("%d¿ø\n", won);*/
	
	/*int su1, su2;

	for (su1 = 1; su1 < 10; su1++)
	{ 
		for (su2 = 1; su2 < 10; su2++)
			printf("%d*%d=%d\n", su1, su2, su1*su2);
	}*/       

	/*int a, b, sum = 0;

	for (a = 1; a <= 10; a++)
	{
		for (b = 1; b <= 10; b++)
			sum += 1;
	}
	printf("sum = %d\n", sum);*/
	/*int a, sum = 0;

	for (a = 1; a <= 10; a++)
		sum += a;
	printf("sum = %d\n", sum);*/
}