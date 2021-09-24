#include "FileOpener.h"

FileOpener::FileOpener()
{
	path = "C:\\Users\\Aaron\\Desktop\\OS_II\\Proyecto\\";
	GetFilePath();
	Pager pager(path);
}

string FileOpener::GetFilePath()
{
	cout << "Input file name: ";
	string filename;
	cin >> filename;
	return path = path + filename;
}
