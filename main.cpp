#include <Windows.h>
#include <algorithm>
#include <cmath>
#include <conio.h>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <fstream>
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <time.h>
using namespace std;
int a[25], b[25], c[25], newa[25], newb[25], newc[25];
char s[55] = {'-1', '3', '3', '3', '3', '4', '4', '4', '4', '5', '5', '5', '5', '6', '6', '6', '6', '7', '7', '7', '7', '8', '8', '8', '8', '9', '9', '9', '9', '0', '0', '0', '0', 'J', 'J', 'J', 'J', 'Q', 'Q', 'Q', 'Q', 'K', 'K', 'K', 'K', 'A', 'A', 'A', 'A', '2', '2', '2', '2', 'r', 'R'};
bool f[55];
void SetPos(COORD a)
{
	HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(out, a);
}
void SetPos(int i, int j)
{
	COORD pos = {i, j};
	SetPos(pos);
}
int rd()
{
	int res;
	srand((unsigned int)time(0));
	do
	{
		res = rand() % 54 + 1;
	} while (f[res]);
	f[res] = true;
	return res;
}
int main()
{
	CONSOLE_CURSOR_INFO cursor_info = {1, 0};
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
	for (int i = 1; i <= 17; i++)
	{
		a[i] = rd();
		b[i] = rd();
		c[i] = rd();
	}
	for (int i = 1; i <= 3; i++)
	{
		a[i + 17] = rd();
	}
	for (int i = 1; i <= 20; i++)
	{
		system("cls");
		newa[i] = a[i];
		sort(newa + 1, newa + i + 1);
		if ((68 - ((i - 1) * 3 + 11)) % 2 != 0)
		{
			SetPos((68 - ((i - 1) * 3 + 11)) / 2 + 1, 0);
		}
		else
		{
			SetPos((68 - ((i - 1) * 3 + 11)) / 2, 0);
		}
		for (int j = 1; j < i; j++)
		{
			cout << " --";
		}
		cout << " ---------" << endl;
		if ((68 - ((i - 1) * 3 + 11)) % 2 != 0)
		{
			SetPos((68 - ((i - 1) * 3 + 11)) / 2 + 1, 1);
		}
		else
		{
			SetPos((68 - ((i - 1) * 3 + 11)) / 2, 1);
		}
		for (int j = 1; j <= i; j++)
		{
			cout << "|";
			if (s[newa[j]] == '0')
			{
				cout << "10";
			}
			else if (s[newa[j]] == 'r')
			{
				cout << "j ";
			}
			else if (s[newa[j]] == 'R')
			{
				cout << "J ";
			}
			else
			{
				printf("%c ", s[newa[j]]);
			}
		}
		cout << "       |" << endl;
		if ((68 - ((i - 1) * 3 + 11)) % 2 != 0)
		{
			SetPos((68 - ((i - 1) * 3 + 11)) / 2 + 1, 2);
		}
		else
		{
			SetPos((68 - ((i - 1) * 3 + 11)) / 2, 2);
		}
		for (int j = 1; j <= i; j++)
		{
			cout << "|";
			if (s[newa[j]] == 'r')
			{
				cout << "o ";
			}
			else if (s[newa[j]] == 'R')
			{
				cout << "O ";
			}
			else
			{
				cout << "  ";
			}
		}
		cout << "       |" << endl;
		if ((68 - ((i - 1) * 3 + 11)) % 2 != 0)
		{
			SetPos((68 - ((i - 1) * 3 + 11)) / 2 + 1, 3);
		}
		else
		{
			SetPos((68 - ((i - 1) * 3 + 11)) / 2, 3);
		}
		for (int j = 1; j <= i; j++)
		{
			cout << "|";
			if (s[newa[j]] == 'r')
			{
				cout << "k ";
			}
			else if (s[newa[j]] == 'R')
			{
				cout << "K ";
			}
			else
			{
				cout << "  ";
			}
		}
		cout << "       |" << endl;
		if ((68 - ((i - 1) * 3 + 11)) % 2 != 0)
		{
			SetPos((68 - ((i - 1) * 3 + 11)) / 2 + 1, 4);
		}
		else
		{
			SetPos((68 - ((i - 1) * 3 + 11)) / 2, 4);
		}
		for (int j = 1; j <= i; j++)
		{
			cout << "|";
			if (s[newa[j]] == 'r')
			{
				cout << "e ";
			}
			else if (s[newa[j]] == 'R')
			{
				cout << "E ";
			}
			else
			{
				cout << "  ";
			}
		}
		cout << "       |" << endl;
		if ((68 - ((i - 1) * 3 + 11)) % 2 != 0)
		{
			SetPos((68 - ((i - 1) * 3 + 11)) / 2 + 1, 5);
		}
		else
		{
			SetPos((68 - ((i - 1) * 3 + 11)) / 2, 5);
		}
		for (int j = 1; j <= i; j++)
		{
			cout << "|";
			if (s[newa[j]] == 'r')
			{
				cout << "r ";
			}
			else if (s[newa[j]] == 'R')
			{
				cout << "R ";
			}
			else
			{
				cout << "  ";
			}
		}
		cout << "       |" << endl;
		if ((68 - ((i - 1) * 3 + 11)) % 2 != 0)
		{
			SetPos((68 - ((i - 1) * 3 + 11)) / 2 + 1, 6);
		}
		else
		{
			SetPos((68 - ((i - 1) * 3 + 11)) / 2, 6);
		}
		for (int j = 1; j <= i; j++)
		{
			cout << "|  ";
		}
		cout << "       |" << endl;
		if ((68 - ((i - 1) * 3 + 11)) % 2 != 0)
		{
			SetPos((68 - ((i - 1) * 3 + 11)) / 2 + 1, 7);
		}
		else
		{
			SetPos((68 - ((i - 1) * 3 + 11)) / 2, 7);
		}
		for (int j = 1; j < i; j++)
		{
			cout << " --";
		}
		cout << " ---------";
		Sleep(125);
	}
	return 0;
}
