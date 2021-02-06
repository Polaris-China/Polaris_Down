#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"    //�����Լ���ͷ�ļ���˫����
void menu()     //����һ��Ŀ¼
{
	printf("*************************\n");
	printf("*****1. play  0.exit*****\n");
	printf("*************************\n");
}
void game()   //��Ϸ������ʵ�֣�
{
	char ret = 0;
	char board[row][col] = { 0 };   //��ʼ��ȫΪ�ո�
	InitBoard(board, row, col);      
	DisplayBoard(board, row, col);  //��ӡ����
	while (1)  //�����ʵ��
	{
		PlayerMove(board,row,col);    //�����ʵ����� 
		DisplayBoard(board, row, col);
		ret=IsWin(board,row,col);     //�ж���Ӯ
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, row, col);//���������ʵ�� 
		DisplayBoard(board, row, col);
		ret=IsWin(board,row,col);
		if (ret != 'C')
		{
			break;
		}
	 }
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
		printf("ƽ��\n");
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));  //srand ����������� ����time�������ص�ʱ�����Ϊsrand��������
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:game(); break;
		case 0: printf("�˳���Ϸ\n"); break;
		default: printf("ѡ�����������ѡ��\n"); break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}