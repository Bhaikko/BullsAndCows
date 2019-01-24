#pragma once
#include <iostream>
#include <queue>
#include <vector>
#include <stack>
#include <string>

class Record
{
private:
	std::string Name;
	int Score;

public:

	Record();
	int GetScore();

	void Input();
	void InitialiseScore();
	void ShowScores();

};

struct MinScore
{
	bool operator()(Record* Record1, Record* Record2)
	{
		return Record1->GetScore() > Record2->GetScore();
	}
};

//std::priority_queue<Record*> Standings;