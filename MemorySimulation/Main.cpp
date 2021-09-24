#include <iostream>
#include <fstream>
#include "Record.h"
#include <string>
#include <stack>
#include "Loader.h"
#include "FileOpener.h"

using namespace std;

int main()
{
	FileOpener filePath;
	string path = filePath.GetFilePath();
	Loader loader(path);
	return 0;
}