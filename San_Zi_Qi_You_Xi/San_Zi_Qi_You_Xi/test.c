
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
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		//��һغ�
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ
		output = IsWin(board, ROW, COL);
		if (output != 'C')
			break;
		//���Իغ�
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ
		output = IsWin(board, ROW, COL);
		if (output != 'C')
			break;
	}
	switch (output)
	{
	case '*':
		printf("��һ�ʤ\n");
		break;
	case '#':
		printf("���Ի�ʤ\n");
		break;
	case 'E':
		printf("ƽ��\n");
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
		printf("��ѡ��:\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("�˳���Ϸ");
			break;
		default:
			printf("�����������������");
			break;
		}
	} while (input != 2);

	
	
}
int main()
{
	test();
	return 0;
}

