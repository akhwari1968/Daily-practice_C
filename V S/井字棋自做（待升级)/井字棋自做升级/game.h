#define  _CRT_SECURE_NO_WARNINGS 1

#define ROW 3
#define COL 3

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void chuarr(char arr[ROW][COL], int row, int col);//�����ʼ��

void display(char arr[ROW][COL],int row,int col);//��ӡ��ʼ״̬����

void playergame(char arr[ROW][COL],int row,int col);//�������

void computergame(char arr[ROW][COL],int row,int col);//��������

//���Ӯ����*
//����Ӯ����#
//ƽ�ַ��أ�
//��������G
char iswin(char arr[ROW][COL], int row, int col);//�ж���Ӯ