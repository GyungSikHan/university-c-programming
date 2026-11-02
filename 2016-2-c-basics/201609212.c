#include	<stdio.h>

void	main()

{
	int	a;
	int	b;
	int	c;
	int	d;
	
	while(1)
	{
		printf("a=");
		scanf("%d",	&a);
		printf("b=");
		scanf("%d",	&b);

		printf("1,+	\n	2,-	\n	3,/	\n	4,*	\n	5	,	exit	\n");
		scanf("%d",	&d);
		if(d==1)
		{
			c	=	a	+	b;
			printf("a+b=	%d	\n"	,c);
		}
		else if	(d==1)
		{
			c	=	a	-	b;
			printf("a-b=	%d	\n"	,c);
		}
		else	if(d==1)
		{
			c	=	a	/	b;
			printf("a/b=	%d	\n"	,c);
		}
		else	if(d==1)
		{
			c	=	a	*	b;
			printf("a*b=	%d	\n"	,c);
		}
		else
		{
			break;
		}
	}
}