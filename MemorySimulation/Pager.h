#pragma once
#ifndef LOADER_H
#define LOADER_H

#include <iostream>
#include <fstream>
#include <string>
#include <stack>
#include <queue>
#include "Record.h"
using namespace std;

class Pager
{
public:
	Pager(string path);
private:
	void StackLoader(ifstream& file);
	stack<Record>checkForInstruction(stack<Record> &instructions, Record record);
	
};

#endif
