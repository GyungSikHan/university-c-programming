#include	<stdio.h>
int _1stFun(int	x)
{
	int y;
	y	=	4*x*x	+	6*x	+	3;
	return	y;
}
void main()
{
	int x;
	int b;
	for(x=-10;x<10;++x)
	{
		printf("x´Â");
		b=_1stFun(x);
		printf("%d \n",b);
	}
}
