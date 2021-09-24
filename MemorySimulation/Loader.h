#pragma once
#ifndef LOADER_H
#define LOADER_H

#include <iostream>
#include <fstream>
#include <string>
#include <stack>
#include "Record.h"
using namespace std;

class Loader
{
public:
	Loader(string path);

private:
	void StackLoader(ifstream& file);
	
};

#endif
