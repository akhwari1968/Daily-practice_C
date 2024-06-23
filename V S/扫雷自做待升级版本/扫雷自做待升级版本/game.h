#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9

#define ROWS ROW+ 2
#define COLS COL+ 2

#define EASY_COUNT 10

void initboard(char board[ROWS][COLS], int rows, int cols, char set);//初始化数组

void displayboard(char board[ROWS][COLS], int row, int col);//打印棋盘

void setmine(char board[ROWS][COLS], int row, int col);//放雷

void finemine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);//找雷