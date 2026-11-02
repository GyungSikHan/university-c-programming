	/*
	int su1;
	printf("정수입력:");
	scanf("%d", &su1);
	if (su1 % 3 == 0)
		printf("3의 배수\n");
	if (su1 % 3 != 0)
		printf("3의 배수가 아닙니다.\n");
	
	int num1;
	scanf("%d", &num1);
	if (num1 < 0)
		printf("입력하신 값의 절대값은 %d 입니다.\n", num1 * -1);
	if (num1 >= 0)
		printf("입력하신 값의 절대값은 %d 입니다.\n", num1);

	int num1;
	printf("수 입력:");
	scanf("%d", &num1);
	if (num1 % 2 == 0)
		printf("짝수\n");
	if (num1 % 2 != 0)
		printf("홀수\n");
	
	int su1, su2;
	printf("2개의 정수 입력:");
	scanf("%d%d", &su1, &su2);
	if (su1 > su2)
		printf("2개의 정수 중 큰 수는 %d 입니다.\n", su1);
	if (su1 < su2)
		printf("2개의 정수 중 큰 수는 %d 입니다.\n", su2);
	if (su1 == su2)
		printf("2개의 정수는 같습니다.\n");
	
	int num1, num2, num3, max;
	scanf("%d%d%d", &num1, &num2, &num3);
	if (num1 > num2)
		max = num1;
	if (num1 < num2)
		max = num2;
	if (max < num3)
		max = num3;
	printf("%d\n", max);
	
	int su1, su2, result1, result2;
	scanf("%d%d", &su1, &su2);

	if (su1 > su2)
		result1 = su1;
	if (su1 < su2)
		result1 = su2;
	result2 = result1 % 2;
	if (result2 == 0)
		printf("2개의 정수 중 큰수는 %d이며, 짝수 입니다.\n", result1);

	int num1, num2, plus, result, to;
	scanf("%d%d", &num1, &num2);

	to = num1 + num2;
	plus = num1 + num2;
	result = num1 + num2;

	plus = plus % 2; // 짝홀수 구분
	result = result % 3; // 3의배수 구분
	if (plus == 0)
		if (result == 0)
			printf("%d는 짝수이고 3의 배수 입니다.\n", to);
	if (plus != 0)
		printf("짝수가 아닙니다.\n");
	*/