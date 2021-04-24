#pragma once
class box
{
public:
	box()
	{

	}
	virtual char Draw() = 0;
};
class Cross :
	public box
{
	virtual char Draw()
	{
		return 'X';
	}
};
class Circle :
	public box
{
	virtual char Draw()
	{
		return 'O';
	}
};
class Empty :
	public box
{
	virtual char Draw()
	{
		return '*';
	}
};