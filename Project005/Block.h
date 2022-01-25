#pragma once
class Block
{
private:
	int xcount;
	int ycount;
	int X;
	int Y;
	int x;
	int y;
	int A[25][10];
	char Input;
public:
	void map();
	void shift();
public:
	Block();
};