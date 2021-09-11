#include <iostream>
#include <fstream>
#include "Record.h"
#include <string>


using namespace std;

void Loader(ifstream &file)
{
	while (!file.eof())
	{
		Record* record = new Record();
		file.read((char*)&record->opCode, 8);
		file.ignore(1);
		file.read((char*)&record->operation, 1);
		file.ignore(1);
		cout << record->opCode << " " << record->operation << endl;
		cout << flush;
		delete record;
	}
}

int main()
{
	ifstream file;
	file.open("C:\\Users\\Aaron\\Desktop\\OS_II\\Proyecto\\bzip.trace", ios::in | ios::binary);
	if (!file.is_open())
	{
		cout << "failed to open file" << endl;
	}
	
	Loader(file);

	file.close();

	return 0;
}