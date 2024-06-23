#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 3

void initboard(char board[ROW][COL],int row,int col);//初始化棋盘声明

void displayborad(char board[ROW][COL],int row,int col);//打印棋盘

void playermove(char board[ROW][COL], int row, int col);//玩家下棋

void computermove(char borad[ROW][COL],int row,int col);//电脑下棋

//玩家赢返回*
//电脑赢返回#
//平局返回Q
//继续返回C
char iswin(char board[ROW][COL], int row, int col);//判断输赢


