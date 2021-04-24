#pragma once
#include <iostream>
#include "Box.h"
class PlayGround
{
public:
	int p1 = 1;
	int p2 = 0;
	PlayGround()
	{
		empty = new Empty();
		cross = new Cross();
		circle = new Circle();
		for (int i = 0; i <= 2; i++)
		{
			for (int j = 0; j <= 2; j++)
			{
				a[i][j] = empty;
			}
		}
	}
	int winP1()
	{
		if (((a[0][0] == circle) && (a[0][1] == circle) && (a[0][2] == circle)) || ((a[1][0] == circle) && (a[1][1] == circle) && (a[1][2] == circle)) || ((a[2][0] == circle) && (a[2][1] == circle) && (a[2][2] == circle)) || ((a[0][0] == circle) && (a[1][0] == circle) && (a[2][0] == circle)) || ((a[0][1] == circle) && (a[1][1] == circle) && (a[2][1] == circle)) || ((a[0][2] == circle) && (a[1][2] == circle) && (a[2][2] == circle)) || ((a[0][0] == circle) && (a[1][1] == circle) && (a[2][2] == circle)) || ((a[0][2] == circle) && (a[1][1] == circle) && (a[2][0] == circle)))
		{
			std::cout << "Winner is ";
			return 1;
		}
		else return 0;
	}
	int winP2()
	{
		if (((a[0][0] == cross) && (a[0][1] == cross) && (a[0][2] == cross)) || ((a[1][0] == cross) && (a[1][1] == cross) && (a[1][2] == cross)) || ((a[2][0] == cross) && (a[2][1] == cross) && (a[2][2] == cross)) || ((a[0][0] == cross) && (a[1][0] == cross) && (a[2][0] == cross)) || ((a[0][1] == cross) && (a[1][1] == cross) && (a[2][1] == cross)) || ((a[0][2] == cross) && (a[1][2] == cross) && (a[2][2] == cross)) || ((a[0][0] == cross) && (a[1][1] == cross) && (a[2][2] == cross)) || ((a[0][2] == cross) && (a[1][1] == cross) && (a[2][0] == cross)))
		{
			std::cout << "Winner is ";
			return 1;
		}
		else return 0;
	}
	void print()
	{
		for (int i = 0; i <= 2; i++)
		{
			for (int j = 0; j <= 2; j++)
			{
				std::cout << a[i][j]->Draw();
			}
			std::cout << std::endl;
		}
	}
	int activePos(int pos)
	{
		pos = pos - 1;
		int j = pos % 3;
		int i = pos / 3;
		if (a[i][j] == empty)
		{
			if (p1 == 1)
			{
				a[i][j] = circle;
				p1--;
				p2++;
				return 1;
			}
			else if (p2 == 1)
			{
				a[i][j] = cross;
				p2--;
				p1++;
				return 1;
			}
		}
		else
		{
			std::cout << "Error. Try again" << std::endl;
			return 0;
		}

	}
private:
	box* a[3][3];
	box* empty;
	box* cross;
	box* circle;
};
