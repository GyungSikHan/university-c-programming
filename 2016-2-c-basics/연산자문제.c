■ 수를 입력 받아 짝,홀수를 구분하여 출력하시오

#include <stdio.h>
Void main()
{
	int a, b, c, d;
	printf("첫 번째 값을 입력하세요 :");
	scanf("%d", &a);
	printf("두 번째 값을 입력하세요 :");
	scanf("%d", &b);
	printf("세 번째 값을 입력하세요 :");
	scanf("%d", &c);
	printf("네 번째 값을 입력하세요 :");
	scanf("%d", &d);
	
	(a % 2 == 0) ? printf("%d :짝수\n", a):
		           printf("%d :홀수\n", a);
	(b % 2 == 0) ? printf("%d :짝수\n", b):
		           printf("%d :홀수\n", b);
	(c % 2 == 0) ? printf("%d :짝수\n", c):
		           printf("%d :홀수\n", c);
	(d % 2 == 0) ? printf("%d :짝수\n", d):
		           printf("%d :홀수\n", d);
	return 0;
}


■ 수를 입력 받아 3의 배수이면 출력하시오

#include <stdio.h>
Void main()
{
	int a, b, c, d;
	printf("첫 번째 값을 입력하세요 :");
	scanf("%d", &a);
	printf("두 번째 값을 입력하세요 :");
	scanf("%d", &b);
	printf("세 번째 값을 입력하세요 :");
	scanf("%d", &c);
	printf("네 번째 값을 입력하세요 :");
	scanf("%d", &d);
	
	(a % 3 == 0) ? printf("%d는 3의 배수입니다.\n", a):
		           printf("");
	(b % 3 == 0) ? printf("%d는 3의 배수입니다.\n", b):
		           printf("");
	(c % 3 == 0) ? printf("%d는 3의 배수입니다.\n", c):
		           printf("");
	(d % 3 == 0) ? printf("%d는 3의 배수입니다.\n", d):
		           printf("");
	return 0;
}


■ 두수를 입력 받아 큰 수를 출력하시오

#include <stdio.h>
Void main()
{
	int num1, num2, result;
	printf("첫 번째 수를 입력하세요: ");
	scanf("%10d", &num1);
	printf("두 번째 수를 입력하세요: ");
	scanf("%10d", &num2);
	result = (num1 < num2);
	(result == 0) ? printf("2개의 값 중 큰 값은 %d 입니다.\n", num1):
		            printf("2개의 값 중 큰 값은 %d 입니다.\n", num2);
	return 0;

}

Void main()

{
	int n1, n2, max;
	Scanf("%d%d",&n1,&n2);
	Max = n1 > n2 ? n1: n2;
	Printf("%d\n",max);
	
}


■ 세수를 입력 받아 큰 수를 출력하시오

#include <stdio.h>
Void main()
{
	int num1, num2, num3, result;
	printf("첫 번째 수를 입력하세요: ");
	scanf("%10d", &num1);
	printf("두 번째 수를 입력하세요: ");
	scanf("%10d", &num2);
	printf("세 번째 수를 입력하세요: ");
	scanf("%10d", &num3);
	result = num1 > num2 ? (num1 > num3 ? num1 : num3) :
						   (num2 > num3 ? num2 : num3);
	
	printf("3개의 값 중 큰 값은 %d 입니다.\n", result);
	return 0;
}

#include <stdio.h>
void main()
{
	int n1, n2, n3, max ;
	scanf("%d%d%d",&n1, &n2, &n3); 
	max = n1 > n2 ? n1 : n2;
	max = max >= n3 ? max : n3;
	printf("%d 입니다.\n",max);
	return 0;
}



■ 두수를 입력 받아 큰 수가 짝수이면 출력하시오


#include <stdio.h>
void main()
{
	int n1, n2, max, max2;
	scanf("%d%d", &n1, &n2);
	max = n1 > n2 ? n1 : n2;
	max2 = max % 2;
	max2 == 0 ? printf("%d은 짝수입니다.\n", max) : printf("짝수가 아닙니다.\n");
	return 0;

}

■ 세수를 입력 받아 큰 수가 짝수이면 출력하시오


#include <stdio.h>
void main()
{
	int n1, n2, n3, max, max2;
	scanf("%d%d%d", &n1, &n2, &n3);
	max = n1 > n2 ? n1 : n2;
	max = max >= n3 ? max : n3;
	max2 = max % 2;
	max2 == 0 ? printf("%d은 짝수입니다.\n",max): printf("짝수가 아닙니다.\n");
	return 0;

}

■ 두수를 입력 받아 합이 짝수이고 3의 배수인 수를 출력하시오

#include <stdio.h>
void main()

{
	int n1, n2, max, max2, max3;
	scanf("%d%d", &n1, &n2);
	max = n1 + n2;
	max2 = max % 2;
	max2 == 0 ? max : printf("짝수가 아닙니다.\n");
	max3 = max % 3;
	max2 == 0 ? printf("%d 은 3의 배수이며 짝수입니다.\n",max) : printf("3의 배수가 아닙니다.\n");
	return 0;

}
