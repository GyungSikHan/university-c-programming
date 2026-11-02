/*
	// 구구단 
	int num1, num2;
	for (num1 = 2; num1 < 10; num1++) {
		for (num2 = 1; num2 < 10; num2++)
			printf("%d X %d = %d\n", num1, num2, num1 * num2);
	}
	//예금
	int day;
	int won = 1;
	for (day = 2; day <= 30; day++)
		won *= 2;
	printf("%d원 \n", won);

	// 1 ~ 1000합
	int i, sum = 0, sum1 = 0;
	for (i = 1; i <= 1000; i++) {
		if (i % 3 == 0 && i % 5 != 0)
			sum1 += i; // 3의 배수의 값만 골라냄
		sum += i;
	}
	sum = sum - sum1;
	printf("%d \n", sum);
	

	// 홀수 합 마지막 수 구하기
	int sum = 0, j;
	for (j = 1; sum < 10000; j++)
	{
		if (j % 2 != 0) {
			sum += j;
		}
	}
	j--;
	printf("%d\n", j);
	*/