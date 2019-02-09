#pragma once
#include <iostream>
#include <cstring>



class Record
{
private:
	char Name[10];
	int Score;
	int Difficulty;

public:
	Record();
	Record(char Name[20],int Score,int Difficulty);
	int GetScore();
	int GetDifficulty();

	void ShowRecord();
	void ModifyRecord(char Name[10], int Score, int Difficulty);
	
	
};

