#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

#include "game.h"
int win = 0;//记录非雷的个数
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("-----扫雷游戏------\n");
	for (j = 0; j <= col; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("-----扫雷游戏------\n");
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	//1-9
	//1-9
	while (count)
	{
		int x = rand() % 9 + 1;
		int y = rand() % 9 + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int get_mine_count(char board[ROWS][COLS], int x, int y)
{
	return (board[x - 1][y] +
		board[x - 1][y - 1] +
		board[x][y - 1] +
		board[x + 1][y - 1] +
		board[x + 1][y] +
		board[x + 1][y + 1] +
		board[x][y + 1] +
		board[x - 1][y + 1] - 8 * '0');
}

void MineSweep(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y, int count)
{
	if (count == 0)//周围没有雷
	{
		int i = 0;
		int j = 0;
		show[x][y] = ' ';
		win++;
		for (i = x - 1; i <= x + 1; i++)
		{
			for (j = y - 1; j <= y + 1; j++)
			{
				if (i >= 1 && i <= ROW && j >= 1 && j <= COL && show[i][j] == '*')//该坐标未处理过且在范围内
				{
					int count1 = get_mine_count(mine, i, j);
					MineSweep(mine, show, i, j, count1);
				}
			}
		}
	}
	else
	{
		win++;
		show[x][y] = count + '0';//转化成数字字符
	}
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	win = 0;
	while (win < row * col - EASY_COUNT)
	{
		printf("请输入要排查的坐标:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)//输入合法
		{
			if (!(show[x][y] == '*' || show[x][y] == '&'))
			{
				printf("该位置已排查过，不能重复排查\n");
			}
			else
			{
				//如果是雷
				if (mine[x][y] == '1')
				{
					printf("很遗憾，你被炸死了,以下为雷的分布：\n");
					DisplayBoard(mine, ROW, COL);
					break;
				}
				//如果不是雷
				else
				{
					int count = get_mine_count(mine, x, y);//统计mine数组（x，y）周围有多少个雷
					MineSweep(mine, show, x, y, count);
					DisplayBoard(show, ROW, COL);
					while (1)
					{
						printf("请输入要标记的坐标(如果不标记请输入12 12）:>\n");
						scanf("%d%d", &x, &y);
						if (!(x == 12 && y == 12))
						{
							show[x][y] = '&';//以“&”标记雷的位置
							DisplayBoard(show, ROW, COL);
						}
						else
						{
							break;
						}
					}

				}
			}
		}
		else
		{
			printf("输入的坐标非法，请重新输入\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜您排雷成功！！以下为雷的分布：\n");
		DisplayBoard(mine, ROW, COL);
	}
}
//基础功能
//1.标记功能--完成
//2.展开一片的功能--完成
//即当排查x，y坐标时：
//1.x，y坐标不是雷
//2.该坐标周围没有雷
//3.该坐标没有被排查过


