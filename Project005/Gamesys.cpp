#include "Gamesys.h"
Gamesys:: Gamesys()
	:xcount(0), ycount(0), A{ 0 }, X(0), Y(0), Input(0), x(0), y(0)
{
}
int Gamesys::SitB(int y1, int y2)//이동전 배열 값과 이동후 배열값이 같은지
{
	if (y1 != y2)
		return 0;
	else
	{
		return -1;
	}
}
void Gamesys::BreakB()
{

}