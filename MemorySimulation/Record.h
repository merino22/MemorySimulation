#pragma once
#ifndef RECORD_H
#define RECORD_H
#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable : 4996)

struct Record
{
	char opCode[8];
	uint8_t space;
	char operation[1];
	uint8_t endline;

public:
	Record() : opCode{ 0 }, space(0), operation{ 0 }, endline(0) {}
	Record(char opCodex[8], char operationx[1])
	{
		strcpy(opCode, opCodex);
		strcpy(operation, operationx);
	}
};

#endif // !RECORD_H

