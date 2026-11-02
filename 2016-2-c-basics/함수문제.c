/*
//[문제.1]
int big(int n1, int n2)
{
	if (n1 > n2) return n1;
	else return n2;
}

int main()
{
	int num1, num2;
	printf("정수 2개 입력:");
	scanf("%d%d", &num1, &num2);
	int result = big(num1, num2);
	printf("2개의 정수 중 큰 수는 %d 입니다.\n", result);
	return 0;
}
*/

/*
//[문제.2]
int OddEven(int n1)
{
	if (n1 % 2 == 0)
		return 1;
	else
		return 0;
}

int main()
{
	int num, result;
	scanf("%d", &num);
	result = OddEven(num);
	if (result == 1)
		printf("입력하신 %d는 짝수 입니다.\n", num);
	else
		printf("입력하신 %d는 홀수 입니다.\n", num);
	return 0;
}
*/

/*
//[문제.3]
int test(int n)
{
	if (n % 3 == 0)
		return 1;
	else
		return 0;
}

int main()
{
	int num, result;
	scanf("%d", &num);
	result = test(num);
	if (result == 1)
		printf("입력하신 %d는 3의 배수 입니다.\n", num);
	else
		printf("입력하신 %d는 3의 배수가 아닙니다.\n", num);
	return 0;
}
*/

/*
//[문제.4]
int sosu(int n)
{
	int cnt = 0, num = 1;
	while (1)
	{
		if (n % num == 0)
			cnt++;
		if (n == num)
			break;
		num++;
	}
	return cnt;
}
int main()
{
	int num, result;
	scanf("%d", &num);
	result = sosu(num);
	if (result == 2)
		printf("소수\n");
	else
		printf("소수가 아닙니다.\n");
	return 0;
}
*/

/*
//[문제.5] 
int test2(int n)
{
	if (n < 0)
		n = -n;
	return n;
}
int main()
{
	int num, result;
	scanf("%d", &num);
	result = test2(num);
	printf("%d의 절대 값은 %d 입니다.\n", num, result);
	return 0;
}
*/

/*
//[문제.6]
int reverse(int n)
{
	int i, temp, result = 0;
	while (1)
	{
		temp = n % 10;
		result = (result + temp) * 10;
		n /= 10;
		if (n == 0)
		{
			result = result / 10;
			break;
		}
	}
	return result;
}

int main()
{
	int num, result;
	scanf("%d", &num);
	result = reverse(num);
	printf("입력하신 정수의 Reverse한 결과 값은 %d 입니다.", result);
	return 0;
}
*/