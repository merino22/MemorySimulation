#include "Loader.h"

Loader::Loader(string path)
{
	ifstream file;
	file.open(path, ios::in || ios::binary);
	StackLoader(file);
}

void Loader::StackLoader(ifstream& file)
{
	
	stack<Record> instructions;
	while (!file.eof())
	{
		if (instructions.size() <= 10000)
		{
			Record record;
			file.read((char*)&record.opCode, 8);
			file.ignore(1);
			file.read((char*)&record.operation, 1);
			file.ignore(1);
			cout << "Instruction with opCode " << record.opCode << " with " << record.operation << " operation, pushed -> stack." << endl;
			instructions.push(record);
		}
		else
		{
			cout << instructions.top().operation << " instruction with opCode " << instructions.top().opCode << " has been popped." << endl;
			instructions.pop();
		}

	}

	cout << flush;

	/*for (int i = 0; i < instructions.size(); i++)
	{
		cout << instructions.top().opCode << ' ' << instructions.top().operation << endl;
		instructions.pop();
	}*/


}
