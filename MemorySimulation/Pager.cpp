#include "Pager.h"
#include "OperationType.h"
#include "Swapper.h"

Pager::Pager(string path)
{
	ifstream file;
	file.open(path, ios::in || ios::binary);
	StackLoader(file);
}

void Pager::StackLoader(ifstream& file)
{
	
	stack<Record> instructions;
	while (!file.eof())
	{
		if (instructions.size() <= 10000)
		{
			Swapper swapper;
			Record record;
			file.read((char*)&record.opCode, 8);
			file.ignore(1);
			file.read((char*)&record.operation, 1);
			file.ignore(1);
			instructions = swapper.checkForInstruction(instructions, record);
			cout << "Instruction with OPCODE " << record.opCode << " with " << record.operation << " operation, pushed -> stack." << endl;
			cout << endl;
			
		}
		else
		{
			cout << instructions.top().operation << " instruction with OPCODE " << instructions.top().opCode << " has been popped." << endl;
			instructions.pop();
		}
	}

	cout << flush;

}

