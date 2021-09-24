#include <iostream>
#include <fstream>
#include "Record.h"
#include <string>
#include <stack>
#include "Pager.h"
#include "FileOpener.h"

using namespace std;

int main()
{
	FileOpener filePath;
	string path = filePath.GetFilePath();
	Pager pager(path);
	return 0;
}