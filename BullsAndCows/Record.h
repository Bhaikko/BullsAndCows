#pragma once
#include <iostream>

#include <string>

class Record
{
private:
	std::string Name;
	int Score;

public:

	Record(std::string Name,int Score);
	int GetScore();

	void ShowRecord();

	
};

