#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 10

void initboard(char board[ROWS][COLS],int rows,int cols,char set);//初始化数组mine无雷时全为'0'

void displayboard(char board[ROWS][COLS],int row,int col);//打印棋盘

void setmine(char board[ROWS][COLS],int row,int col);//放置雷到mine

void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);//排雷

