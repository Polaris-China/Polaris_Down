#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h" 
void InitBoard(char board[row][col], int Row, int Col)
{
	int i, j;
	for (i = 0; i < Row; i++)
	{
		for (j = 0; j < Col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void DisplayBoard(char board[row][col], int Row, int Col)
{
	int i = 0,j=0;
	for (i = 0; i < Row; i++)
	{
		for (j = 0; j < Col; j++)
		{
			printf(" %c ", board[i][j]);  //��ӡһ�е�����
			if (j < Col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < Row - 1)      //��ӡ�ָ��У��������һ�ָ��в���ӡ
		{
			for (j = 0; j < Row; j++)
			{
				printf("---");
				if (j < Col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
} 
void PlayerMove(char board[row][col], int Row, int Col)
{
	int x = 0, y= 0;
	printf("����ߣ�>\n");
	while (1)
	{
		printf("������Ҫ�µ����꣺>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= Row && y >= 1 && y <= Col) //�ж�x,y����ĺϷ���
		{
			if (board[x - 1][y - 1] == ' ')          //x-1,y-1 ��Ӧ������±�
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("�����걻ռ��\n");
			}
		}
		else
		{
			printf("����Ƿ�������������!\n");
		}
	} 
}
void ComputerMove(char board[row][col], int Row, int Col)
{
	int x = 0, y = 0;
	printf("�����ߣ�>\n");
	while (1)
	{
		x = rand() % Row;  //���ɵ��������
		y = rand() % Col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
int IsFull(char board[row][col],int Row,int Col)    //����1����ʾ�������ˣ�����0����ʾ����δ��
{
	int i = 0, j = 0;
	for (i = 0; i < Row; i++)
	{
		for (j = 0; j < Col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
char IsWin(char board[row][col], int Row, int Col)
{
	int i = 0;
	//�жϺ�����
	for (i = 0; i < Row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	//�ж�������
	for (i = 0; i < Col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	//�ж������Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//�ж�ƽ��
	if (1 == IsFull(board, row, col))
	{
		return 'Q';
	}
	return 'C';
}