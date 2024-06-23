#define  _CRT_SECURE_NO_WARNINGS 1

#define ROW 3
#define COL 3

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void chuarr(char arr[ROW][COL], int row, int col);//数组初始化

void display(char arr[ROW][COL],int row,int col);//打印初始状态棋盘

void playergame(char arr[ROW][COL],int row,int col);//玩家下棋

void computergame(char arr[ROW][COL],int row,int col);//电脑下棋

//玩家赢返回*
//电脑赢返回#
//平局返回！
//继续返回G
char iswin(char arr[ROW][COL], int row, int col);//判断输赢