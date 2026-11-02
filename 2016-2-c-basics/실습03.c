###########################################################################

#include <stdio.h>

main()
{
	FILE *fp_in, *fp_out;//stream이2개이다 
	int value1, value2;
	int sum_value;

	fp_in = fopen("input.dat","r");//char*인입력단자가2개있다 inout.dat와r인read(불러오기)2개 
	fp_out= fopen("result.dat","w");//char*인입력단자가2개있다 result.dat와w인write(읽어오기)2개 

	if (fp_in == NULL )
	{
			printf(" I can't open file input.dat \n");
			exit();
	}
	if (fp_out == NULL )
	{
			printf(" I can't write file result.dat \n");
			exit();
	}
	fscanf(fp_in, "%d %d", &value1, &value2);
	printf(" Input value 1 : %d,	value 2 : %d \n", value1, value2);
	sum_value=value1+value2;
	fprintf(fp_out, "%d %d %d", value1, value2, sum_value);
	fclose(fp_in);
	fclose(fp_out);
}

input.dat 파일의 내용

10 20

result.dat 파일의 내용

10 20 30

###########################################################################
#include <stdio.h>

main()
{
	FILE *fp_org, *fp_copy;
	char c;
	fp_org = fopen("data.org","r");
	fp_copy= fopen("data.cpy","w");

	if (fp_org == NULL )
	{
			printf(" I can't find data.org file \n");
			exit();
	}
	if (fp_copy == NULL )
	{
			printf(" I can't open data.cpy file \n");
			exit();
	}
	while((c=getc(fp_org))!=EOF) {
		putc(c,fp_copy);
	}

	fclose(fp_org);
	fclose(fp_copy);
}

data.org 파일의 내용   data.cpy 파일의 원래 내용    while문 이후에 data.cpy
 
동해물과 백두산이                                    동해물과 백두산이 
vvvvvvvvvvvvvvvv                                    vvvvvvvvvvvvvvvv
대~한민국                                           대~한민국 
sssssssssssssssss                                   sssssssssssssssss

###########################################################################

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void out_use(void);

void main(int argc, char *argv[])
{
   int op1, op2, result;
   char *opr;

   /* 오류 처리 */
   if ( argc < 4 )
   {
        out_use();
        exit(1);
   }

   /* 초기화 */
   op1 = atoi(argv[1]);
   op2 = atoi(argv[3]);
   opr = argv[2];

   /* 처리 */
   if ( 0 == strcmp(opr, "+") )
        result = op1 + op2;
   else if ( 0 == strcmp(opr, "-") )
        result = op1 - op2;
   else if ( 0 == strcmp(opr, "*") )
        result = op1 * op2;
   else if ( 0 == strcmp(opr, "/") )
        result = op1 / op2;
   else
   {
        out_use();
        exit(1);
   }

   /* 결과 출력 */
   printf("%d %s %d = %d\n", op1, opr, op2, result);
   getch();
}

/* 사용법 */
void out_use(void)
{
   printf("사용법 : Calc_arg <수> <연산자> <수>\n\n");
   printf("<연산자> : +\n");
   printf("           -\n");
   printf("           *\n");
   printf("           /\n\n");
}
###########################################################################

#include <conio.h>
#include <stdio.h>
#include <string.h>


#define MAXGAME             10

int main(void)
{
   char *p_game[MAXGAME];
   int i, sum_strlen;

   sum_strlen = 0;

   p_game[0] = "[0] Commandos";
   p_game[1] = "[1] StarCraft";
   p_game[2] = "[2] Alien Slayer";
   p_game[3] = "[3] Dooly";
   p_game[4] = "[4] Refrain Love";
   p_game[5] = "[5] Dune 2000";
   p_game[6] = "[6] Alien Encounter";
   p_game[7] = "[7] Worms 2";
   p_game[8] = "[8] Jazz JackRabbit 2";
   p_game[9] = "[9] Fifa 99";

   clrscr();

   /* 포인터가 가리키는 문자열 출력 */

   for ( i=0; i<MAXGAME; i++ )
        printf("%s\n", p_game[i]);

   /* 포인터의 길이 */

   printf("\n포인터 p_game의 길이 : %d 바이트\n\n", sizeof(p_game));

   /* 실제 사용된 문자열의 길이 */

   for ( i=0; i<MAXGAME; i++ )
        sum_strlen += strlen(p_game[i]) + 1;

   printf("실제 사용된 문자열의 길이 : %d 바이트\n\n", sum_strlen);

   /* 전체 메모리 소모량 출력 */

   printf("전체 사용된 메모리의 량 : %d + %d = %d 바이트",
        sizeof(p_game), sum_strlen, sizeof(p_game) + sum_strlen);
   getch();
}

[0] Commandos
[1] StarCraft
[2] Alien Slayer
[3] Dooly
[4] Refrain Love
[5] Dune 2000
[6] Alien Encounter
[7] Worms 2
[8] Jazz JackRabbit 2
[9] Fifa 99

포인터 p_game의 길이 : 40 바이트

실제 사용된 문자열의 길이 : 152 바이트

전체 사용된 메모리의 량 : 40 + 152 = 192 바이트

###########################################################################

#include <conio.h>
#include <stdio.h>
#include <string.h>

void main(void)
{
   char para[] = "BlueSky";
   char *ptr_para;
   int i;

   ptr_para = &para[0];

   //clrscr();

   for ( i=0; i<strlen(para); i++ )
        printf("*(ptr_para+%d) : %c\n", i, *(ptr_para+i));

   printf("\n");

   for ( i=0; i<strlen(ptr_para); i++ )
        printf("*ptr_para+%d : %c\n", i, *ptr_para+i);
}

*(ptr_para+0) : B
*(ptr_para+1) : l
*(ptr_para+2) : u
*(ptr_para+3) : e
*(ptr_para+4) : S
*(ptr_para+5) : k
*(ptr_para+6) : y

*ptr_para+0 : B
*ptr_para+1 : C
*ptr_para+2 : D
*ptr_para+3 : E
*ptr_para+4 : F
*ptr_para+5 : G
*ptr_para+6 : H

###########################################################################

#include <stdio.h>
#include <string.h>
           
main()
{
     static char moji1[30], moji2[30];

     printf("문자열 1을 입력해 주십시오 :\t");
     gets(moji1);
     printf("문자열 2를 입력해 주십시오 :\t");
     gets(moji2);
     strcat(moji1, moji2);
     puts(moji1);
     printf("");
     return(0);
}

문자열 1을 입력해 주십시오 :    안녕하세요~
문자열 2를 입력해 주십시오 :    김성기 입니다.
안녕하세요~김성기 입니다.

###########################################################################


#include	<stdio.h>	
#include	<string.h>	

/*문자열의 최대 길이*/
#define	MAX	128	

/*문자열의 위치를 찾는 함수*/
int search(char *, char *);

int main()
{
    char src[MAX];
    char dest[MAX];
    int addr;

	/*가장긴 원문의 문자열을 입력받는 함수*/
    do{
		puts("본 문자열을 입력하십시오.");
		gets(src);
    }while(!strlen(src));

	/*찾을 문자열을 입력받는 부분*/
    do{
		puts("찾을 문자열을 입력하십시오.");
		gets(dest);
    }while(!strlen(dest));

	/*원문에서 특정 문자열 찾는 함수 호출 결과는 배열 주소의 위치*/
    addr=search(src, dest);

    printf("당신이 찾을 [%s]는 src[%d]에있습니다.\n",dest, addr);

    return 0;
}

/*찾고자하는 문자열을 찾아서 배열의 주소를 리턴한다.*/
int search(char src[], char dest[])
{
    int i;
    int j,temp;

    for(i=0; src[i] != '\0'; i++){
		temp=i;
		for(j=0; ; j++, temp++){
			if( src[temp] != dest[j] )
				break;
			else if( dest[j+1] == '\0')
				return i+1;
		}
    }

}

본 문자열을 입력하십시오.
C Programming Laguages
찾을 문자열을 입력하십시오.
o
당신이 찾을 [o]는 src[5]에있습니다.

###########################################################################
/* 시간 형식을 나타내는 상수입니다. */
#define CLOCK_FORMAT1 0
#define CLOCK_FORMAT2 1
#define CLOCK_FORMAT3 2

/* 알람 메시지의 전체 길이를 나타내는 상수입니다. */
#define ALARM_MESSAGE_MAX_LENGTH (100+1)

void display_time(int format, int hour, int minute, int second);
void display_menu(void);

int get_alarm_hour(void);
int get_alarm_minute(void);
int get_alarm_second(void);
int get_current_hour(void);
int get_current_minute(void);
int get_current_second(void);

void run_clock(void);

void alarm(char* alarm_message);
void get_alarm_message(char* alarm_message);

+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include "clock.h"


void main(void)
{
 run_clock();
}

/***************************************************************
함 수 명 : run_clock()
기능설명 : 시계 프로그램의 주 루틴으로 루프를 돌면서 
   시간을 출력합니다.
입    력 : [void]
반    환 : [void]
**************************************************************/
void run_clock(void)
{
 int clock_format = CLOCK_FORMAT1; /* 시간 형식 */
 int current_hour = 0;    /* 현재 시각 */
 int current_minute = 0;    /* 현재 분 */
 int current_second = 0;    /* 현재 초 */
 int alarm_hour = -1;    /* 알람 시각 */
 int alarm_minute = -1;    /* 알람 분 */
 int alarm_second = -1;    /* 알람 초 */


 /* 이전 초, 현재 시간과 달라지면 화면을 다시 그리기 위해 사용됩니다. */
 int old_second = -1;

 char c;        /* 키 입력값 */
 
 /* 알람 메시지 */
 char alarm_message[ALARM_MESSAGE_MAX_LENGTH] = "지정한 알람 시간이 되었습니다.";

 /* 계속해서 루프를 돕니다. */
 while (1)
 {
  /* 현재 시간을 얻어와서 변수를 설정합니다.*/
  current_hour = get_current_hour();
  current_minute = get_current_minute();
  current_second = get_current_second();

  /* 현재 시간이 바뀌었다면 화면을 다시 그립니다. */
  if (current_second != old_second)
  {
   system("cls");   /*화면을 지웁니다. */
   
   /* 메뉴를 표시합니다. */
   display_menu();
   
   /* 시계를 표시합니다. */
   display_time(clock_format,
    current_hour, current_minute,
    current_second);

   /* 현재 시간을 이전 시간으로 만듭니다. */
   old_second = current_second;
  }

  /* 키보드가 눌릴 경우 */
  if (kbhit())
  {
   /* 어떤 키가 눌렸는지 아스키값을 c에 저장합니다.*/
   c = getch();

   switch (c)
   {
   case '1' :
    /* 1이 눌릴 경우, 시계 표시 형식을 바꿉니다.*/
    clock_format = CLOCK_FORMAT1;
    break;

   case '2' :
    /* 2이 눌릴 경우, 시계 표시 형식을 바꿉니다.*/
    clock_format = CLOCK_FORMAT2;
    break;

   case '3' :
    /* 3이 눌릴 경우, 시계 표시 형식을 바꿉니다.*/
    clock_format = CLOCK_FORMAT3;
    break;

   case 'x' :
    /* x가 눌릴 경우 프로그램을 종료합니다.*/
    exit(0);
    break;

   case 'a' :
    /* a가 눌릴 경우 알람 시간과 메시지를 입력받습니다. */
    alarm_hour = get_alarm_hour();
    alarm_minute = get_alarm_minute();
    alarm_second = get_alarm_second();
    
    /* 알람 메시지를 입력받아 alarm_message문자열 변수에 저장합니다. */
    get_alarm_message(alarm_message);
    break;
   }
  }

  /* 현재 시간이 알람 시간과 같다면 알람을 표시합니다. */
  if (current_hour == alarm_hour
   && current_minute == alarm_minute
   && current_second == alarm_second)
  {
   alarm(alarm_message);
  }
 }
}

/***************************************************************
함 수 명 : display_time()
기능설명 : 매개변수로 주어진 시간을 주어진 형식으로 화면에
   표시합니다.
입    력 :
 * format - 시간을 보여줄 형식
 * hour - 시
 * minute - 분
 * second - 초
반    환 : [void]
**************************************************************/
void display_time(int format, int hour, int minute, int second)
{
 /* 시간을 보여줄 형식이 CLOCK_FORMAT1인 경우 */
 if (format == CLOCK_FORMAT1)
 {
  /* ''11 : 10 : 4 PM'' 형식으로 표시합니다. */
  if (hour > 12)
  {
   hour = hour - 12;
   printf("현재 시간 : %2d : %2d : %2d PM\n", hour, minute, second);
  }
  else
  {
   printf("현재 시간 : %2d : %2d : %2d AM\n", hour, minute, second);
  }
 }
 /* 시간을 보여줄 형식이 CLOCK_FORMAT2인 경우 */
 else if (format == CLOCK_FORMAT2)
 {
  /* ''23 : 10 : 04'' 형식으로 표시합니다. */
  printf("현재 시간 : %02d : %02d : %02d\n", hour, minute, second);
 }
 /* 시간을 보여줄 형식이 CLOCK_FORMAT3인 경우 */
 else if (format == CLOCK_FORMAT3)
 {
  /* ''오후 11시 10분 4초'' 형식으로 표시합니다. */
  if (hour > 12)
  {
   hour = hour - 12;
   printf("현재 시간 : 오후 %2d시 %2d분 %2d초\n", hour, minute, second);
  }
  else
  {
   printf("현재 시간 : 오전 %2d시 %2d분 %2d초\n", hour, minute, second);
  }
 }
}

/***************************************************************
함 수 명 : get_current_hour()
기능설명 : 현재 시각을 반환합니다.
입    력 : [void]
반    환 : [int] - 현재 시각
**************************************************************/
int get_current_hour(void)
{
 time_t long_time;   
 struct tm *current_time;

 /* time_t형식의 변수에 현재 시간을 얻어옵니다. */
 time(&long_time);

 /* time_t형식의 long_time변수로부터 시, 분, 초를 나타내는
 변수인 struct tm형식의 current_time변수로 값을 변환합니다. */
 current_time = localtime(&long_time);


 return current_time->tm_hour;
}

/***************************************************************
함 수 명 : get_current_minute()
기능설명 : 현재 분을 반환합니다.
입    력 : [void]
반    환 : [int] - 현재 분
**************************************************************/
int get_current_minute(void)
{
 time_t long_time;
 struct tm *current_time;

 /* time_t형식의 변수에 현재 시간을 얻어옵니다. */
 time(&long_time);

 /* time_t형식의 long_time변수로부터 시, 분, 초를 나타내는
 변수인 struct tm형식의 current_time변수로 값을 변환합니다. */
 current_time = localtime(&long_time);

 return current_time->tm_min;
}

/***************************************************************
함 수 명 : get_current_second()
기능설명 : 현재 초를 반환합니다.
입    력 : [void]
반    환 : [int] - 현재 초
**************************************************************/
int get_current_second(void)
{
 time_t long_time;
 struct tm *current_time;

 /* time_t형식의 변수에 현재 시간을 얻어옵니다. */
 time(&long_time);

 /* time_t형식의 long_time변수로부터 시, 분, 초를 나타내는
 변수인 struct tm형식의 current_time변수로 값을 변환합니다. */
 current_time = localtime(&long_time);

 return current_time->tm_sec;
}

/***************************************************************
함 수 명 : display_menu()
기능설명 : 메뉴를 화면에 표시합니다.
입    력 : [void] 
반    환 : [void]
**************************************************************/
void display_menu(void)
{
 printf("1 : 시계 형식1\n");
 printf("2 : 시계 형식2\n");
 printf("3 : 시계 형식3\n");
 printf("x : 프로그램 종료\n");
 printf("a : 알람 입력\n\n");
}

/***************************************************************
함 수 명 : get_alarm_hour()
기능설명 : 알람 시각을 입력받아 이를 반환합니다.
입    력 : [void] 
반    환 : [int] - 알람 시각
**************************************************************/
int get_alarm_hour(void)
{
 int hour;

 printf("\n알람이 울릴 시각을 입력하세요 :");
 scanf("%d", &hour);
 return hour;
}

/***************************************************************
함 수 명 : get_alarm_minute()
기능설명 : 일림 분을 입력받아 이를 반환합니다.
입    력 : [void] 
반    환 : [int] - 알람 분
**************************************************************/
int get_alarm_minute(void)
{
 int minute;

 printf("\n알람이 울릴 분을 입력하세요 :");
 scanf("%d", &minute);
 return minute;
}

/***************************************************************
함 수 명 : get_alarm_second()
기능설명 : 알람 초를 입력받아 이를 반환합니다.
입    력 : [void]
반    환 : [int] - 알람 초
**************************************************************/
int get_alarm_second(void)
{
 int second;

 printf("\n알람이 울릴 초를 입력하세요 :");
 scanf("%d", &second);
 return second;
}

/***************************************************************
함 수 명 : get_alarm_message()
기능설명 : 알람 메시지를 입력받습니다. 
입    력 : 
 * alarm_message - 입력받을 알람메시지를 저장할 문자열 변수
반    환 : [void]
**************************************************************/
void get_alarm_message(char* alarm_message)
{
 /* 키보드 버퍼에 들어 있는 내용을 모두 지웁니다.
 키보드 버퍼에 값이 남아 있을 경우에 gets함수가 이
 값을 가져오기 때문에 먼저 키보드 버퍼의 내용을 
 지웁니다. */
 flushall();

 printf("\n알람 메시지를 입력하세요 :");
 
 /* 알람 메시지를 얻어옵니다. */
 gets(alarm_message);
}

/***************************************************************
함 수 명 : alarm()
기능설명 : 알람 메시지를 표시하고, 알람 소리를 냅니다.
입    력 : 
 * alarm_message - 알람 메시지
반    환 : [void]
**************************************************************/
void alarm(char* alarm_message)
{
 
 printf("알람!!\n");
 printf("%s\n", alarm_message);

 /* 키보드가 눌려질 때까지 소리를 냅니다. */
 while(!kbhit())
 {
  /* \a는 beep음을 냅니다. */
  printf("\a");
 }
}


1 : 시계 형식1
2 : 시계 형식2
3 : 시계 형식3
x : 프로그램 종료
a : 알람 입력

현재 시간 :  4 : 58 :  0 AM
알람!!
 그만 자자 졸립다~

###########################################################################
#include "stdio.h"

#define MAX 20
// 스택구현부
char stack[MAX];
int  top=-1;
int push(char c);
int pop(char *pc);

char ch[] = "0123456789ABCDEF";
//진법변환함수
void process(int s, int base);//s:십진수, base:진법수
void output(int s, int base); //스택내용을 출력한다.

void main()
{
	int s, base;
	while(true)
	{
		printf("십진수를 입력하세요(0=종료) : ");
		scanf("%d", &s);
		if(s < 0) 
		{
			printf("양수만 입력해야합니다.!");
			break;
		}
		else if( s == 0 ) break;

		printf("변환진법수를 입력하세요 : ");
		scanf("%d", &base);
		if( base < 2 || base > 16 )
		{
			printf("2 .. 16사이의 값을 입력해야합니다.!");
			break;
		}

		process(s, base);
		output(s, base);
		printf("\n");
	}
}

void process(int s, int base)
{
	if( s < base )
	{
		push(ch[s]);
	}
	else
	{
		push(ch[s%base]);
		process(s/base, base);
	}
}

int push(char c)
{
	if( top == MAX-1 ) return -1; //스택이 가득 찼음
	top++;
	stack[top] = c;
	return 0;
}

int pop(char *pc)
{
	if( top == -1 ) return -1; //스택이 비었음
	*pc = stack[top];
	top--;
	return 0;
}

void output(int s, int base)
{
	char c;
	printf("%d ----> ", s);
	while( pop(&c) == 0 )
	{
		printf("%c", c);
	}
	printf("(%d)", base);
}

십진수를 입력하세요(0=종료) : 67
변환진법수를 입력하세요 : 8
67 ----> 103(8)
십진수를 입력하세요(0=종료) : 34
변환진법수를 입력하세요 : 2
34 ----> 100010(2)
십진수를 입력하세요(0=종료) : 34
변환진법수를 입력하세요 : 16
34 ----> 22(16)
십진수를 입력하세요(0=종료) :
###########################################################################
