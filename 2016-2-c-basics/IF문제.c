	/*

	//입력 받은 수가 짝수인지 홀수인지 검사하는 프로그램
	int num1;
	scanf("%d", &num1);
	num1 = num1 % 2;
	if (num1 == 0)
		printf("짝수!\n");
	else
		printf("홀수!\n");

	//유원지

	int result;
	float num1, num2;
	printf("이용 시간 입력:");
	scanf("%f", &num1);
	result = 3000;
	if (num1 <= 30)
	{
		printf("요금 = %d원 입니다.\n", result);
	}
	else if (num1 > 30)
	{
		num2 = ((num1 - 30) / 10) * 500;
		result = float(result) + num2;
		printf("요금 = %d원 입니다.\n", result);
	}

	//도시락
	int num1, result;
	printf("도시락 몇개?");
	scanf("%d", &num1);
	if (num1 > 10)
		result = 2400;
	else
		result = 2500;
	printf("도시락 %d개의 가격은 %d 입니다.\n", num1, num1*result);

	//디스켓
	int num1, num2, result;
	printf("디스켓 몇 통?");
	scanf("%d", &num1);
	result = 5000;
	if (num1 >= 10)
	{
		if (num1 >= 100)
		{
			num2 = result * 0.12;
		}
		else
		{
			num2 = result * 0.1;
		}
	}
	else
		num2 = 0;

	result = result - num2;
	printf("디스켓의 가격은 %d 입니다.\n", result * num1);

	
	//세 과목 성정 
	int n1, n2, n3, avr;
	scanf("%d%d%d", &n1, &n2, &n3);
	avr = (n1 + n2 + n3) / 3;
	if (avr >= 90)
		printf("A\n");
	else if (avr >= 80)
		printf("B\n");
	else if (avr >= 70)
		printf("C\n");
	else if (avr >= 60)
		printf("D\n");
	else
		printf("F\n");

	*/