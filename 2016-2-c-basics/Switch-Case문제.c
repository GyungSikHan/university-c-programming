	/*
	//[ 사칙연산 계산기 ]
	int num1, num2, num3;
	printf("사칙연산 계산기\n");
	printf("======================\n");
	printf("1.덧셈\n");
	printf("2.뺄셈\n");
	printf("3.나눗셈\n");
	printf("4.곱셈\n");
	scanf("%d", &num3);
	switch (num3)
	{
	case 1: printf("덧셈을 진행 할 정수를 입력:");
		scanf("%d%d", &num1, &num2);
		printf("%d + %d = %d 입니다.\n", num1, num2, num1 + num2); break;
	case 2: printf("뺄셈을 진행 할 정수를 입력:");
		scanf("%d%d", &num1, &num2);
		printf("%d - %d = %d 입니다.\n", num1, num2, num1 - num2); break;
	case 3: printf("나눗셈을 진행 할 정수를 입력:");
		scanf("%d%d", &num1, &num2);
		printf("%d / %d = %d 입니다.\n", num1, num2, num1 / num2); break;
	case 4: printf("곱셈을 진행 할 정수를 입력:");
		scanf("%d%d", &num1, &num2);
		printf("%d * %d = %d 입니다.\n", num1, num2, num1 * num2); break;
	}

	//[ 성적표 만들기 ]
	int num, kor, mat, eng, result;
	char name[10];
	while (1) {
		printf("\t\t M E N U \n");
		printf("=======================================================\n");
		printf("\t1.학생이름 입력\n");
		printf("\t2.성적 3과목 입력\n");
		printf("\t3.학생이름 출력\n");
		printf("\t4.합계 출력\n");
		printf("\t5.평균 출력\n");
		printf("\t6.종료\n");
		printf("=======================================================\n");
		scanf("%d", &num);
		switch (num) {
		case 1: printf("학생 이름 입력:");
			scanf("%s", name); break;
		case 2: printf("성적 3과목(국어,수학,영어) 입력:");
			scanf("%d%d%d", &kor, &mat, &eng); break;
		case 3: printf("학생 이름 : %s", name); getch(); break;
		case 4: printf("성적 합계 : %d", kor + mat + eng); getch(); break;
		case 5: result = kor + eng + mat;
			printf("평균 출력 : %d", result / 3); getch(); break;
		case 6: exit(1);
		}
		system("cls");
	}
	*/