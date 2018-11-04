/*#include  <stdio.h>
#include <stdlib.h>
# include <time.h>
#include <string.h>
#pragma warning (disable:4996)
#define ROWS 12
#define COLS 12
#define DEFALL_MINES 20

//菜单显示
 void menu(){
	printf("**************************\n");
	printf("******** 1.play **********\n");
	printf("******** 0.exit **********\n");
	printf("******** 请选择:**********\n");
	printf("**************************\n");
}

 //生成雷
int  GetRandIndex(int start, int end)
{
	return	   rand() % (end - start + 1) + start;
}

//定义雷的数目，种下种子
void SetMines(char mine[][COLS], int _rows, int _cols)
{
	int count = DEFALL_MINES;
	srand((unsigned long)time(NULL));
	while (count){
		int x = GetRandIndex(1, _rows - 2);
		int y = GetRandIndex(1, _cols - 2);
		if (mine[x][y] == '0'){
			mine[x][y] = '1';
			count--;
		}
	}

}


//展示的图
   void  showBoard(char show[][COLS], int _rows, int _cols)
{
	      int i = 1;
		   printf("   ");
		   for (; i <=_rows-2; i++){
			   printf("%d ", i);
		   }
		   printf("\n");
		   printf("   ");
		   for (i=1; i <= _rows - 2; i++){
			   printf("..");
		   }
		   printf("\n");
		   for (i = 1; i <= _cols - 2; i++){
			   printf("%2d:", i);
			   int j = 1;
			   for (j = 1; j <= _cols - 2; j++){
				   printf("%c ", show[i][j]);
			   }
			   printf("\n");
			   }
		   }

 //统计周围雷数
   int GetIndexMines(char mine[][COLS], int x, int y){
	  return mine[x-1][y-1] + mine[x-1][y+1] + mine[x+1][y-1] + mine[x+1][y+1] + \
		   mine[x-1][y] + mine[x][y-1] + mine[x][y+1] + mine[x+1][y] -8*'0';
   }

   //玩游戏，判断是否踩雷
   void  PlayGame(char mine[][COLS], char show[][COLS], int _rows, int _cols){
	   showBoard(show, ROWS, COLS);
	  // showBoard(mine, ROWS, COLS);
	   int x, y;
	   int is_win = 0;
	   while (1){
		   printf("输入横坐标：");
		   scanf("%d", &y);
		   printf("输入纵坐标：");
		   scanf("%d", &x);
		   if (x >= 1 && x <= _rows - 2 && y >= 1 && y <= _cols - 2){
			   if (mine[x][y] == '0'){
				   int num = GetIndexMines(mine, x, y);
				   show[x][y] = num + '0';
				   is_win++;
				   showBoard(show, ROWS, COLS);
				   if ((_rows - 2)*(_cols - 2) - is_win == DEFALL_MINES)
				   {
					   printf("you win!\n");
					   break;
				   }
			   }
				   else
				   {
					   printf("game over");
					   break;
				   }
			   }
		   else{
			   printf("输入错误，重新输入：");
		   }
	   }
   }

   //整体的游戏思路
void game(){
	char mine[ROWS][COLS];//雷数组，布雷图
	char show[ROWS][COLS];//展示的数组，显示图
	memset(mine, '0', sizeof(mine));//将雷图，里面全部赋值0字符
	memset(show, '*', sizeof(show));//展示中全部为*
	SetMines(mine, ROWS, COLS );//埋雷函数
	PlayGame(mine, show, ROWS, COLS);//玩游戏主函数
}


int main(){
	menu();
	int input = 0;
	scanf("%d", &input);
		switch (input){
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("重新选择>>:\n");
			break;
		}
		system("pause");
	return 0;
}*/