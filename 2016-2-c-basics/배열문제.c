	//[문제.0]
	int std[5];
	for (int i = 0; i < 3; i++)
	{
		printf("점수 입력:");
		scanf("%d", &std[i]);
	}
	std[3] = std[0] + std[1] + std[2];
	std[4] = std[3] / 3;
	printf("국어\t영어\t수학\t합계\t평균\n");
	for (int i = 0; i < 5; i++)
		printf("%d\t", std[i]);
	printf("\n");


	//[문제.1]
	int cnt;
	char str[] = "Kgitbank!!!!";
	cnt = sizeof(str);
	for (int i = 0; i < cnt; i += 2)
		printf("%c", str[i]);
	printf("\n");
	

	//[문제.2]
	char in;
	char str[6] = "Hello";
	printf("단일 문자 입력:");
	scanf("%c", &in);
	for (int i = 0; i < 5; i++) {
		if (str[i] == in)
			str[i] = in;
		else
			str[i] = '#';
	}
	for (int i = 0; i < 5; i++)
		printf("%c", str[i]);
	printf("\n");