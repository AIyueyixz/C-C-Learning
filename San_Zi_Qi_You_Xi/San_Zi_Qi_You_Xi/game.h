#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#define ROW 3
#define COL 3

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

//º¯ÊýµÄÉùÃ÷
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL],int row,int col);
char IsWin(char board[ROW][COL], int row, int col);