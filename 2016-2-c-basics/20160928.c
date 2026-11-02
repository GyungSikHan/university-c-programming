#include <stdio.h>

void main()
{
	int	A;
	int	x;
	float	y;
	float	sum = 0;
	printf("A?");
	scanf("%d",&A);
	for(	x	=	0	;	x	<	A	;	x	=	x	+	1)
		{
			y	=	2.4*x*x	-	3.1*x	+	10.8;
			sum	=	sum	+	y;
			printf("%d,	%f	\n",	x,	y);
		}
	printf("%f	\n",	sum);
}