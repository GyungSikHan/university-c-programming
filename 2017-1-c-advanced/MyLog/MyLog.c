#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

void readme(void);

void main(int argc, char *argv[])
{
    int operand1, operand2;
	char* result;

    FILE *write;
	
	write = fopen("log.txt", "w");

	if(write == NULL) {
		puts("사용법을 숙지하세요");
	    exit(1);
	}
	
	if(argc < 3) { 
		readme();
		exit(1);
	}

	operand1 = atoi(argv[1]);
	operand2 = atoi(argv[3]);
	

    if( operand1 > operand2 )
		result = ">";
	else if ( operand1 < operand2)
		result = "<";
	else if ( operand1 == operand2 )
		result = "==";
	else {
		readme();
		exit(1);
	} 

    fprintf(write, "Result = %d %s %d \n", operand1, result, operand2);

    fclose(write);
}

void readme(void) {

  SetConsoleTextAttribute(GetStdHandle( STD_OUTPUT_HANDLE ), 2 | FOREGROUND_INTENSITY );
  puts("사용법 :  실행파일명 숫자 연산자 숫자 를 입력하세요.(부등호는못하겠습니다.)");
  puts("예시   :  FileProject2 3 * 5");
}