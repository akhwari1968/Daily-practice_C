#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 3

void initboard(char board[ROW][COL],int row,int col);//��ʼ����������

void displayborad(char board[ROW][COL],int row,int col);//��ӡ����

void playermove(char board[ROW][COL], int row, int col);//�������

void computermove(char borad[ROW][COL],int row,int col);//��������

//���Ӯ����*
//����Ӯ����#
//ƽ�ַ���Q
//��������C
char iswin(char board[ROW][COL], int row, int col);//�ж���Ӯ


