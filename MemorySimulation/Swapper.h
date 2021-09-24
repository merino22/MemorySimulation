#pragma once
#ifndef SWAPPER_H
#define SWAPPER_H

#include <iostream>
#include <stack>
#include "Record.h"

using std::stack;
using std::cout;
using std::endl;

class Swapper
{
public:
	Swapper();
	Swapper(stack<Record>& instructions, Record record);
	stack<Record> checkForInstruction(stack<Record>& instructions, Record record);
	
};

#endif

