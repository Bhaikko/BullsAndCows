#include "Record.h"


Record::Record(std::string Name,int Score)
{
	this->Name = Name;
	this->Score = Score;
}

int Record::GetScore()
{
	return Score;
}

void Record::ShowRecord()
{
	std::cout << "Name: " << Name << std::endl;
	std::cout << "Score: " << Score << std::endl;
}