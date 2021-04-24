#include <iostream>
#include <Windows.h>
#include "PlayGround.h"
#include <string>
#include <stdlib.h>

using namespace std;

int main()
{
	string name1, name2;
	int i = 0;
	int pos;
	PlayGround* play = new PlayGround();
	cout << "Enter the name of 1 player" << endl;
	cin >> name1;
	cout << "Enter the name of 2 player" << endl;
	cin >> name2;
	cout << "The Battle has began" << endl;
	cout << "[1][2][3]" << endl;
	cout << "[4][5][6]" << endl;
	cout << "[7][8][9]" << endl;
	cout << "---------" << endl;
	do
	{
		cin >> pos;
		system("cls");
		cout << "[1][2][3]" << endl;
		cout << "[4][5][6]" << endl;
		cout << "[7][8][9]" << endl;
		cout << "---------" << endl;
		i = i + play->activePos(pos);
		play->print();
		if (play->winP1() == 1)
		{
			pos = 0;
			cout << name1 << endl;
		}
		else if (play->winP2() == 1)
		{
			pos = 0;
			cout << name2 << endl;
		}
		else if (i == 9)
		{
			pos = 0;
			cout << "Draw" << endl;
		}
	} while (pos != 0);
	system("pause");
}