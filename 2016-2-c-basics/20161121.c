#include <stdio.h>
void main()
{
	int a;
	int x,y;
	scanf("%d",&a);
	for(y=0;y<a;++y)
	{
		for(x=0;x<a;++x)
		{
			printf("%3d",y*a+x);
		}
		printf("\n");
	}
	for(y=0;y<a;++y)
	{
		for(x=0;x<a;++x)
		{
			if(y==x||x+y==a-1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
