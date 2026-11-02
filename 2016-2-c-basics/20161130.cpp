/*1.
0,0,1,1,0,2,0
2.
1243243
3.
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
		printf("x는");
		b=_1stFun(x);
		printf("%d \n",b);
	}
}
4.
#include <stdio.h>

int	sum(int twice[], int cnt)
{
	int sum=0;
	int i;
	for(i=0; i<cnt;++i)
	{
		sum +=twice[i];
	}
	return sum;
}

void main()
{
	int twice[9];
	int i;
	for(i=0;i<9;++i)
	{
		twice[i]=i+1;
	}
	printf("%d\n", sum(twice,9));
}
5.
#include <stdio.h>
void main()
{
	char arr[100];
	int cnt[26];
	int x;
	int y;
	printf("영문 문자를 입력 하시오\n");
	scanf("%s",arr);
	for(y=0;y<26;++y)
	{
		cnt[y]=0;
	}
	for(x=0;x<100;++x)//arr[x]
	{
		for(y=0;y<26;++y)//a~z
		{
			if(arr[x]=='a'+y)
			{
				cnt[y]++;
			}
		}
	}
	//출력/
	for (y=0;y<26;++y)//a~z/
	{
		printf("%c=%d\n",'a'+y,cnt[y]);
	}
}
6.
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
7.
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
			if(a[y*7+x]%1==0)
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
8.
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
 */