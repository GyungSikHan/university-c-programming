#include <stdio.h>
void main()

{	int x,y;
	int a[49];
	
	for(y=0;y<7;++y)
	{
		for(x=0;x<7;++x)
		{
			a[y*7+x]=y*7+x;
		}
	}
	for(y=0;y<7;++y)
	{
		for(x=0;x<7;++x)
		{
			if(a[y*7+x]%2==0)
			{
				printf("%3d",a[y*7+x]);
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}