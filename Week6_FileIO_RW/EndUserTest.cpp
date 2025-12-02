#include "FileIO_RW.h"

int main()
{
	FileIO_RW g;

	g.readData();
	g.calcTotal();
	g.calcAvg();
	g.writeData();

	return 0;
}