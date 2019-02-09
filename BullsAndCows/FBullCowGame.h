#pragma once
#include<string>
#include"FWord.h"
#include "Record.h"
#include<map>
#include <fstream>
#include <vector>


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

	Record Standings[4][5];

	bool IsIsogram(std::string) const;
	bool IsLowercase(std::string) const;

	void DataInitialisation();
	void GenerateWord(int Difficulty);
	void SetMaxTries(int Difficulty);

	void DefaultRecord();

public:
	FBullCowGame(int Difficulty);
	
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