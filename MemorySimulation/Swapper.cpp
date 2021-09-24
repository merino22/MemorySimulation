#include "Swapper.h"


Swapper::Swapper()
{
}

Swapper::Swapper(stack<Record>& instructions, Record record)
{
}

stack<Record> Swapper::checkForInstruction(stack<Record>& instructions, Record record)
{
	stack<Record> newInstructions;
	bool found = false;
	if (instructions.empty())
	{
		newInstructions.push(record);
		return newInstructions;
	}

	while (!instructions.empty())
	{
		if ((strcmp(instructions.top().operation, "W") == 0 && strcmp(record.operation, "W") == 0) && (strcmp(instructions.top().opCode, record.opCode) == 0))
		{
			instructions.pop();
			cout << "Old Write Operation swapped by new Write Operation, OPCODE-> " << record.opCode << endl << endl;
			newInstructions.push(record);
			found = true;
		}
		else
		{

			newInstructions.push(instructions.top());
			instructions.pop();

		}
	}
	if (found == false)
	{
		newInstructions.push(record);
	}
	return newInstructions;
}
