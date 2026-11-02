	//[문제.1] : Hello 출력
	int num1;
	for (num1 = 1; num1 <= 4; num1++)
		printf("%d.Hello\n", num1);
	printf("\n\n\n");

	//[문제.2] : A ~ Z 출력
	int num2;
	for (num2 = 65; num2 <= 90; num2++)
		printf("%c, ", num2);
	printf("\b\b \n");
	printf("\n\n\n");

	//[문제.3] : 3 + 6 + 9 = 18 출력
	int su1, su2, sum = 0;
	for (su1 = 1; su1 <= 10; su1++)
	{
		su2 = su1 % 3;
		if (su2 == 0)
		{
			printf("%d", su1);
			printf("+");
			sum += su1;
		}
	}
	printf("\b=%d\n", sum);
	printf("\n\n\n");