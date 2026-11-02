	/*
	//[문제.1]
	char arr[100];
	int i = 0;

	printf("문자열 입력:");
	scanf("%s", arr); //hello

	while (arr[i] != '\0') //문자열 길이를 알아내기 위한 While문
		i++;
	
	while (i >= 0) {
		printf("%c", arr[i - 1]);
		i--;
	}
	printf("\n");

	//[문제.2]
	char arr[100];
	int i = 0;
	char result;
	 
	printf("문자열 입력:");
	scanf("%s", arr);

	result = arr[0];
	while (arr[i] != '\0') {
		if (arr[i] > result)
			result = arr[i];
		i++;
	}
	printf("아스키 코드 값이 가장 큰 문자는 : %c 입니다.\n", result);
	*/