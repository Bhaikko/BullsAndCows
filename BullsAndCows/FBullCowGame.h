#pragma once
#include<string>
#include"FWord.h"
#include "Record.h"
#include<map>
#include <fstream>
#include <queue>
#include <vector>
#include <stack>


struct FBullCowCount
{
	int Bulls = 0;
	int Cows = 0;
};




enum class EWordStatus
{
	Invalid_Status,
	OK,
	Not_Isogram,
	Wrong_Length,
	Not_Lowercase
};

struct MinScore
{
	bool operator()(Record* Record1, Record* Record2)
	{
		return Record1->GetScore() > Record2->GetScore();
	}
};

class FBullCowGame
{
private:
	int CurrentTry;
	int CurrentWordIndex;
	int MaxTries;
	int Score;
	int ScoreToAdd;
	
	FWord* Words[4][26];
	FWord* GameWords[5];
	FWord* HiddenWord;
	std::priority_queue<Record*, std::vector<Record*>, MinScore> Standings[4];

	bool IsIsogram(std::string) const;
	bool IsLowercase(std::string) const;

	void DataInitialisation();
	void GenerateWord(int Difficulty);
	void SetMaxTries(int Difficulty);

	void DefaultRecord();

public:
	FBullCowGame(int Difficulty);
	
	//Getters
	int GetMaxTries() const;
	int GetCurrentTry() const;
	int GetHiddenWordLength() const;
	EWordStatus CheckValidGuess(std::string) const;
	FBullCowCount SubmitValidGuess(std::string);

	void NextWord();

	FWord* GetCurrentWord();

	int GetScoreToAdd();
	void AddScore(int Score);

	void EvaluateScore(int Difficulty);
	void ShowScore();
	void DeleteRecord();
	int ReturnCurrentScore();

	

};