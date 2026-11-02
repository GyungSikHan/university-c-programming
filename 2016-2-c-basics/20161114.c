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
