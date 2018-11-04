/*
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include  <time.h>
#pragma warning (disable:4996)
#define ROW 3
#define COL 3
void menu(){
	printf("############################\n");
	printf("##########1.play############\n");
	printf("##########0.exit############\n");
	printf("############################\n");
}
void   show_board( char  arr[][COL ], int row, int col){
	int i = 0;
	int j = 0;
	system("cls");
	for (i = 0; i <row; i++){
		printf("--- --- ---");
		printf("\n");
		for (j = 0; j < col; j++){
			printf(" %c", arr[i][j]);
			printf(" |");
			
		}
		printf("\n");
	}

	}
void player(char arr[][COL], int row, int col){

		int b = 0;
		int c = 0;
		printf("请输入横纵坐标：");
		while (1){
			scanf("%d %d", &b, &c);
			b--;
			c--;
			if (arr[b][c] == '\0'&& b < 4 && c < 4){
				arr[b][c] = 'p';
				break;
			}
			else{
				printf("输入有误，重新输入:\n");
				player(arr, row, col);
				break;
			}
		}
		show_board(arr, row, col);
		printf("\n");
	}
void computer_move(char arr[][COL], int row, int col){
	while (1){
		int x = rand() % 3;
		int y = rand() % 3;
		if (arr[x][y] == '\0'){
			arr[x][y] = '0';
			break;
		}
	}
	show_board(arr, row, col);
}

char  find_win(char arr[][COL], int row, int col){
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++){
		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2]){
			return arr[i][0];
		}
	}
	for (j = 0; j < 3; j++){
		if (arr[0][j] == arr[1][j] && arr[1][j] == arr[2][j]){
			return arr[0][j];
		}
	}
	if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2]){
		return arr[0][0];
	}
	if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0]){
		return arr[0][2];
	}

}
     void game(int arr[][COL]){
		 while (1){
			 player(arr, ROW, COL);
			 computer_move(arr, ROW, COL);
			 check(arr);
		 }

}

int  check(int arr[][COL]){
	
		while (1){
			char ret = find_win(arr, ROW, COL);
			if (ret == 'p'){
				printf("你赢了");
				break;
				printf("\n");
			}
			else if (ret == '0'){
				printf("你输了");
				break;
			}
			else{
				break;
			}
		}
		return 0;
	}
int main(){
	menu();
	printf("请选择：");
	int a = 0;
	scanf("%d", &a);
	char arr[ROW][COL];
	memset(arr, '\0', sizeof(arr));
	srand((unsigned int)time(NULL));
	show_board(arr, ROW, COL);
	switch (a){
	case 0:
		break;
	case 1:
		game(arr);
		break;
	defualt:
		break;
	}
	system("pause");

	return 0;
}*/