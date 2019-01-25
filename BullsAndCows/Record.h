#pragma once
#include <iostream>

#include <string>

class Record
{
private:
	std::string Name;
	int Score;
	int Difficulty;

public:

	Record(std::string Name,int Score,int Difficulty);
	int GetScore();
	int GetDifficulty();

	void ShowRecord();

	void ModifyRecord(std::string Name, int Score);
	
};

