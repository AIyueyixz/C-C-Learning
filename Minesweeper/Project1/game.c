#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

#include "game.h"
int win = 0;//��¼���׵ĸ���
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
	printf("-----ɨ����Ϸ------\n");
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
	printf("-----ɨ����Ϸ------\n");
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
	if (count == 0)//��Χû����
	{
		int i = 0;
		int j = 0;
		show[x][y] = ' ';
		win++;
		for (i = x - 1; i <= x + 1; i++)
		{
			for (j = y - 1; j <= y + 1; j++)
			{
				if (i >= 1 && i <= ROW && j >= 1 && j <= COL && show[i][j] == '*')//������δ��������ڷ�Χ��
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
		show[x][y] = count + '0';//ת���������ַ�
	}
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	win = 0;
	while (win < row * col - EASY_COUNT)
	{
		printf("������Ҫ�Ų������:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)//����Ϸ�
		{
			if (!(show[x][y] == '*' || show[x][y] == '&'))
			{
				printf("��λ�����Ų���������ظ��Ų�\n");
			}
			else
			{
				//�������
				if (mine[x][y] == '1')
				{
					printf("���ź����㱻ը����,����Ϊ�׵ķֲ���\n");
					DisplayBoard(mine, ROW, COL);
					break;
				}
				//���������
				else
				{
					int count = get_mine_count(mine, x, y);//ͳ��mine���飨x��y����Χ�ж��ٸ���
					MineSweep(mine, show, x, y, count);
					DisplayBoard(show, ROW, COL);
					while (1)
					{
						printf("������Ҫ��ǵ�����(��������������12 12��:>\n");
						scanf("%d%d", &x, &y);
						if (!(x == 12 && y == 12))
						{
							show[x][y] = '&';//�ԡ�&������׵�λ��
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
			printf("���������Ƿ�������������\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("��ϲ�����׳ɹ���������Ϊ�׵ķֲ���\n");
		DisplayBoard(mine, ROW, COL);
	}
}
//��������
//1.��ǹ���--���
//2.չ��һƬ�Ĺ���--���
//�����Ų�x��y����ʱ��
//1.x��y���겻����
//2.��������Χû����
//3.������û�б��Ų��


