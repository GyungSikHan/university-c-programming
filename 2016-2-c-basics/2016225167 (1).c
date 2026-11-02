#include  <stdio.h>
void main()
{
	int x,y;
	int a;
	scanf("%d",&a);
	if(a%2==0)
	{
		for(y=0;y<a;++y)
		{
			for(x=0;x<a;++x)
			{
				printf("*");
			}
			printf("\n");//짝수일때별일자로출력
		}
	}
	else if(a%2==1)
	{
		for(y=0;y<a;++y)
		{
			for(x=0;x<a;++x)
			{
				if((x==a/2)||(y==a/2))
				{
					printf("*");//별출력
				}
				else
				{
					printf(" ");//빈칸출력
				}
			}
			printf("\n");//홀수일때십자가출력
		}
	}
}