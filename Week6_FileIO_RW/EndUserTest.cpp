#include "FileIO_RW.h"

int main()
{
	FileIO_RW f;

	f.readData();
	f.calcTotal();
	f.calcAvg();
	f.writeData();

	return 0;
}