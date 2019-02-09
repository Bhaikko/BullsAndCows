#include "Record.h"

Record::Record()
{
	return;
}


Record::Record(char Name[20],int Score)
{
	strcpy(this->Name, Name);
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

	//std::cout << "Called" << std::endl;
}

void Record::ModifyRecord(char Name[10], int Score)
{
	strcpy(this->Name, Name);
	this->Score = Score;
	//this->Difficulty = Difficulty;
}