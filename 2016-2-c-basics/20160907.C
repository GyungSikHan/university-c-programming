#include	<stdio.h>

void	main()
{
	float	A;
	float	B;
	float	C;
	A	=	1.0;
	B	=	2.0;
	printf("A	=	밑변?	");
	scanf("%f"	,	&A	);
	printf("B	=	높이?	");
	scanf("%f"	,	&B	);
	C	=	A	*	B	/	2.0;
	printf("%.1f	\n"	,	C);
	printf("A	=	반지름?	");
	scanf("%f"	,	&A	);
	C	=	A	*	A	*	3.14;
	printf("%.1f	\n"	,	C);
}

