#include <stdio.h>

void main()

{
	int A;
	int Sum=0;

	while(1)
	{
		printf("A=");
		scanf("%d",	&A);


		if(A==0)
		{
			break;
		}
		Sum=0;
		while(A!=0)
		{
			Sum=Sum	+	A;
			A=A-1;
		}
		printf("%d\n",Sum);
	}
}