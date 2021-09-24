#pragma once
#ifndef FILEOPENER_H
#define FILEOPENER_H

#include <iostream>
#include <string>
#include "Pager.h"

using std::string;
using std::cout;
using std::cin;

class FileOpener
{
public:
	FileOpener();
private:
	string path;
	string GetFilePath();
};

#endif
