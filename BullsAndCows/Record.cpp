#include "Record.h"


Record::Record(char Name[20],int Score,int Difficulty)
{
	strcpy(this->Name, Name);
	this->Score = Score;
	this->Difficulty = Difficulty;
}

int Record::GetScore()
{
	return Score;
}

int Record::GetDifficulty()
{
	return Difficulty;
}

void Record::ShowRecord()
{
	std::cout << "Name: " << Name << std::endl;
	std::cout << "Score: " << Score << std::endl;
	std::cout << "Difficulty: " << Difficulty << std::endl;

	//std::cout << "Called" << std::endl;
}
