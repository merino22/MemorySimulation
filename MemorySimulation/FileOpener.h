#pragma once
#ifndef FILEOPENER_H
#define FILEOPENER_H

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;

class FileOpener
{
public:
	FileOpener();
	string GetFilePath();
private:
	string path;
};

#endif
