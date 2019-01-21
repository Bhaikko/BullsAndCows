#pragma once
#include<string>
#include"FWord.h"
#include<map>


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
	
	FWord* WordObject;
	FWord* Words[5];
	FWord* HiddenWord;

	bool IsIsogram(std::string) const;
	bool IsLowercase(std::string) const;

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

	

	//Setters

	void SetMaxTries(int Difficulty);


};