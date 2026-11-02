#include<stdio.h>
#include "cal.h"//내가 만든 헤더파일, 헤더파일에 소스를 만들어 줘야한다

int main() {
	int a = 20;
	int b = 30;
	int c = add(a, b);
	printf("%d", c);
}
int add(int a, int b) {//내가 만든 헤더 파일에 입력을 해주어야한다
	return a + b;
}