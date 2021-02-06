#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"    //引用自己的头文件用双引号
void menu()     //创建一个目录
{
	printf("*************************\n");
	printf("*****1. play  0.exit*****\n");
	printf("*************************\n");
}
void game()   //游戏的整个实现；
{
	char ret = 0;
	char board[row][col] = { 0 };   //初始化全为空格
	InitBoard(board, row, col);      
	DisplayBoard(board, row, col);  //打印棋盘
	while (1)  //下棋的实现
	{
		PlayerMove(board,row,col);    //下棋的实现玩家 
		DisplayBoard(board, row, col);
		ret=IsWin(board,row,col);     //判断输赢
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, row, col);//电脑下棋的实现 
		DisplayBoard(board, row, col);
		ret=IsWin(board,row,col);
		if (ret != 'C')
		{
			break;
		}
	 }
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
		printf("平局\n");
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));  //srand 随机数的生成 ，将time函数返回的时间戳作为srand的生成器
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:game(); break;
		case 0: printf("退出游戏\n"); break;
		default: printf("选择错误，请重新选择\n"); break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}