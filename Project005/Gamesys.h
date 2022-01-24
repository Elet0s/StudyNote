#pragma once
class Gamesys
{
private:
	int xcount;
	int ycount;
	int X;
	int Y;
	int x;
	int y;
	int A[10][10];
	char Input;
public:
	void FallB();
	int SitB(int y1, int y2);
	void BreakB();
public:
	Gamesys();
};

