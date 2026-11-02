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
