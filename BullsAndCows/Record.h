#pragma once
#include <iostream>
#include <cstring>



class Record
{
private:
	char Name[10];
	int Score;
	

public:
	Record();
	Record(char Name[20],int Score);
	int GetScore();
	

	void ShowRecord();
	void ModifyRecord(char Name[10], int Score);
	
	
};

