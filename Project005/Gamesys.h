#pragma once
class Gamesys
{
private:
public:
	void FallB(int xcount, int ycount, int X, int Y, int A[25][10]);
	void BreakB(int xcount, int ycount, int Y, int A[25][10]);
	void CheakB(int xcount, int ycount, int X, int Y, int A[25][10]);
	void PrintB(int xcount, int ycount, int X, int Y, int A[25][10]);
	int SitB(int y1, int y2);
public:
	Gamesys();
};