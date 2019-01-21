#pragma once
#include<string>
#include"FWord.h"
#include<map>
#define Tmap std::map

using FString = std::string;
using int32 = int;

struct FBullCowCount
{
	int32 Bulls = 0;
	int32 Cows = 0;
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
public:
	FBullCowGame();

	//Getters
	int32 GetMaxTries() const;
	int32 GetCurrentTry() const;
	int32 GetHiddenWordLength() const;
	
	

	bool IsGameWon() const;
	
	EWordStatus CheckValidGuess(FString) const;
	
	void Reset();	
	FBullCowCount SubmitValidGuess(FString);


	//Setters

	void SetGameDifficulty(int Difficulty);



private:
	int32 CurrentTry;
	int32 GameDifficulty;
	FString HiddenWord;
	bool bGameWon;

	bool IsIsogram(FString) const;
	bool IsLowercase(FString) const;
};