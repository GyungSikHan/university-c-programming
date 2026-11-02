//[ 포인터 배열 Quiz ]
	int i, j, tmp;
	int *pa;
	int a[8] = {17,25,8,32,19,23,11,3};
	pa = a;

	for (i = 0; i < 7; i++)
	{
		for (j = i + 1; j < 8; j++)
		{
			if (*(pa + i) > *(pa + j))
			{
				tmp = *(pa + i);
				*(pa + i) = *(pa + j);
				*(pa + j) = tmp;
			}
		}
	}
	for (i = 0; i < 8; i++)
		printf("%4d", *(pa + i));
	printf("\n");
