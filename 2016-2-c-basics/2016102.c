/*#include	<stdio.h>
int sum(int a, int b)
{
	return a+b;
}	
int sub(int a, int b)
{
	return a-b;
}
int mul(int a, int b)
{
	return a*b;
}
float div(int a, int b)
{
	return (float)a/b;
}
void main()
{
	int	a,b;
	int	c;
	printf(	"a="	);
	scanf("%d",	&a);
	printf("b=");
	scanf("%d",	&b);
	printf("0:+,1:-,2:*,3:/ ¼±ÅÃ");
	scanf("%d",&c);
	switch(c)
	{
		case 0:
			printf("%d\n",sum(a,b));
			break;
		case 1:
			printf("%d\n",sub(a,b));
			break;
		case 2:
			printf("%d\n",mul(a,b));
			break;
		case 3:
			printf("%d\n",div(a,b));
			break;
	}
}*/
/*#include <stdio.h>

int _2ndFun(int x)
{
	return 2*x*x+4*x+8;
}
void main()
{
	int a;
	int B[20];
	int sum=0;
	for(a=-10; a<11; ++a)
	{
		B[a+10]= _2ndFun(a);
		sum = sum + B[a+10];
	}
	for(a=-10; a<11; ++a)
	{
		printf("%d\n",_2ndFun(a));
	}
	printf("%d\n",sum);
}*/

#include <stdio.h>

int _2ndFun(int x)
{
	return 4*x*x-2*x+3;
}
int _1ndFun(int x)
{
	return 2*x+7;
}
void main()
{
	int a;
	int B[21];
	int sum=0;
	for(a=-10; a<11; ++a)
	{
		B[a+10]= _1ndFun(a) -_2ndFun(a);
		sum += B[a+10];
	}
	for(a=-10; a<11; ++a)
	{
		printf("%d\n",B[a+10]);
	}
	printf("%d\n",sum);
}
