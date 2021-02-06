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
			printf(" %c ", board[i][j]);  //打印一行的数据
			if (j < Col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < Row - 1)      //打印分割行，但是最后一分割行不打印
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
	printf("玩家走：>\n");
	while (1)
	{
		printf("请输入要下的坐标：>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= Row && y >= 1 && y <= Col) //判断x,y坐标的合法性
		{
			if (board[x - 1][y - 1] == ' ')          //x-1,y-1 对应数组的下标
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该坐标被占用\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入!\n");
		}
	} 
}
void ComputerMove(char board[row][col], int Row, int Col)
{
	int x = 0, y = 0;
	printf("电脑走：>\n");
	while (1)
	{
		x = rand() % Row;  //生成的随机坐标
		y = rand() % Col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
int IsFull(char board[row][col],int Row,int Col)    //返回1，表示棋盘满了，返回0，表示棋盘未满
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
	//判断横三行
	for (i = 0; i < Row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	//判断竖三列
	for (i = 0; i < Col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	//判断两个对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//判断平局
	if (1 == IsFull(board, row, col))
	{
		return 'Q';
	}
	return 'C';
}