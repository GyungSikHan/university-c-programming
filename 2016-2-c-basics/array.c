#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void array1();
void array2();
void board();
void board2(int x);
void dic();
enum Direction {
	up,down,left,right
};
struct block {
	int colunm;
	int row;
	int color;
	int event;
};
int main() {
	//array2();
	srand(time(NULL));
	int array3[10][10];
	int cnt = 0, tmp=0;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			array3[i][j] = rand() % 8;
			printf("%d ", array3[i][j]);
		}
		printf("\n");
	}
	printf("%d \n", cnt);
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (array3[i][j] == 2) {
				if (array3[i][j + 1] == 3) {
					tmp = array3[i][j];
					array3[i][j] = array3[i][j+1];
					array3[i][j + 1] = tmp;
				}
			}
			printf("%d ", array3[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	//board();
	//bool x;
	//scanf("입력하세요 = %d", &x);
	
	//board2(x);
	dic();
	
}

void array1(){
	int array1[101] = { 0 };

	for (int i = 1; i <= 100; i++) {
		array1[i] = i;
		printf("%d\n", array1[i]);
	}
}

void array2() {
	int array2[10][10] = { 0 };
	int i, j;
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			array2[i][j] = j;
			printf("%d ", array2[i][j]);
		}
		printf("\n");
	}
}

void board() {
	block board1[5][5];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			board1[i][j].colunm = i;
			board1[i][j].row = j;
			board1[i][j].color = rand() % 6;
			board1[i][j].event = rand() % 2;
			printf("colunm = %d row = %d color = %d event = %d\n", board1[i][j].colunm, board1[i][j].row, board1[i][j].color, board1[i][j].event);
		}
	}
}

void board2(int x) {
	block board2[5][5];
	block tmp;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			board2[i][j].colunm = i;
			board2[i][j].row = j;
			board2[i][j].color = rand() % 6;
			board2[i][j].event = rand() % 2;
			printf("colunm = %d row = %d color = %d event = %d\n", board2[i][j].colunm, board2[i][j].row, board2[i][j].color, board2[i][j].event);
		}
	}
	if (x) {
		tmp = board2[0][0];
		board2[0][0] = board2[4][4];
		board2[4][4] = tmp;
	}
	printf("\ncolunm = %d row = %d color = %d event = %d\n", board2[0][0].colunm, board2[0][0].row, board2[0][0].color, board2[0][0].event);
	printf("\ncolunm = %d row = %d color = %d event = %d\n", board2[4][4].colunm, board2[4][4].row, board2[4][4].color, board2[4][4].event);
	
}
void dic() {
	int direct = 0;
	scanf("%d", &direct);
	switch (direct) {
	case up:
		printf("위");
		break;
	case down:
		printf("아래");
		break;
	}
	printf("\n");
	while (1) {
		
		scanf("%d", &direct);
		if (direct == up) {
			printf("위\n");
			
		}
		if (direct == down) {
			printf("아래\n");
		
		}
	}
}
