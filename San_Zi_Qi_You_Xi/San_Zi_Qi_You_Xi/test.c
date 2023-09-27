
#include "game.h"

void menu()
{
	printf("*******************\n");
	printf("***1.play 2.exit***\n");
	printf("*******************\n");
}

void game()
{
	char board[ROW][COL] = { 0 };
	char output = 0;
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		//玩家回合
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断输赢
		output = IsWin(board, ROW, COL);
		if (output != 'C')
			break;
		//电脑回合
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断输赢
		output = IsWin(board, ROW, COL);
		if (output != 'C')
			break;
	}
	switch (output)
	{
	case '*':
		printf("玩家获胜\n");
		break;
	case '#':
		printf("电脑获胜\n");
		break;
	case 'E':
		printf("平局\n");
		break;
	}

}
void test()
{
	
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("退出游戏");
			break;
		default:
			printf("输入错误，请重新输入");
			break;
		}
	} while (input != 2);

	
	
}
int main()
{
	test();
	return 0;
}

