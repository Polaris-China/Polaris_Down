#define col 3
#define row 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//函数的声明
void InitBoard(char board[row][col], int Row, int Col);
void DisplayBoard(char board[row][col], int Row, int Col);
void PlayerMove(char board[row][col], int Row, int Col);
void ComputerMove(char board[row][col], int Row, int Col);
//玩家赢——‘*’
//电脑赢——‘#’
//平局——‘Q’
//继续——‘C’
char IsWin(char board[row][col],int Row,int Col);
