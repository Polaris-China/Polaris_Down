#define col 3
#define row 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//����������
void InitBoard(char board[row][col], int Row, int Col);
void DisplayBoard(char board[row][col], int Row, int Col);
void PlayerMove(char board[row][col], int Row, int Col);
void ComputerMove(char board[row][col], int Row, int Col);
//���Ӯ������*��
//����Ӯ������#��
//ƽ�֡�����Q��
//����������C��
char IsWin(char board[row][col],int Row,int Col);
