#include"Block.h"
#include"Gamesys.h"
#include<iostream>
#include<conio.h>

int main()
{
	Block NewBlock = Block();
	Gamesys NewGamesys = Gamesys();
	NewBlock.map();
	NewBlock.shift();

	return 0;
}