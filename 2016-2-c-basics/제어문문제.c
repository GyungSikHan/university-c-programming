	/*
	int i, j, num, cnt = 0;
	scanf("%d", &num);
	for (i = 2; i <= num; i++) {
		for (j = 2; j <= num; j++) {
			if (i%j == 0)
				cnt++;
		}
		if (cnt == 1)
			printf("%d ", i);
		cnt = 0;
	}
	
	int num1 = 1, ret = 0;
	while (1) {
		if (num1 > 1000)
			break;
		if (num1 % 4 == 1 && num1 % 6 == 1) {
			printf("%d ", num1);
			ret += num1;
		}
		num1++;
	}
	printf("\n%d\n", ret);

	int i, j, sum = 0;
	for (i = 1; i <= 1000; i++) {
		for (j = 1; j < i; j++) {
			if (i % j == 0)
				sum += j;
		}
		if (i == sum)
			printf("%d\n", i);
		sum = 0;
	}

	15,12 최대 공약수["3"], 최소 공배수["60"]
	15의 약수 = { 1, 3, 5, 15 } , 배수 = { 15, 30, 45, 60 }
	12의 약수 = { 1, 2, 3, 4, 6, 12 } , 배수 = { 12, 24, 36, 48, 60}

	int num1, num2, max, min, i = 2; 
	scanf("%d%d", &num1, &num2);

	while (i <= num1 && i <= num2) {
		if (num1 % i == 0 && num2 % i == 0)
			min = i; // 최대 공약수
		i++;
	}
	max = num1 * num2 / min; // 최소 공배수 
	printf("%d %d", min, max);

	*/
