#include "FBullCowGame.h"




void FBullCowGame::Reset()
{
	CurrentTry = 1;
	const FString HIDDEN_WORD = "planet";
	HiddenWord = HIDDEN_WORD;
	bGameWon = false;
	return;
}

FBullCowGame::FBullCowGame()
{
	Reset();
}

void FBullCowGame::SetGameDifficulty(int Difficulty)
{	GameDifficulty = Difficulty;}

int32 FBullCowGame::GetCurrentTry() const
{	return CurrentTry;}

bool FBullCowGame::IsGameWon() const
{	return bGameWon;}

bool FBullCowGame::IsIsogram(FString Word) const
{
	if (Word.length() <= 1)
		return true;

	Tmap<char, int> LetterSeen;
	for (auto Letter : Word)
	{
		Letter = tolower(Letter);
		if (LetterSeen[Letter] == false)
			LetterSeen[Letter] = true;
		else if (LetterSeen[Letter])
			return false;

	}
	return true;
}

bool FBullCowGame::IsLowercase(FString Word) const
{
	for (auto Letter : Word)
	{
		if(!islower(Letter))
			return false;
	}
	return true;
}

EWordStatus FBullCowGame::CheckValidGuess(FString GuessWord) const
{
	if (!IsIsogram(GuessWord))
	{
		return EWordStatus::Not_Isogram;
	}
	else if (!IsLowercase(GuessWord))
	{
		return EWordStatus::Not_Lowercase;
	}
	else if (GetHiddenWordLength()!=GuessWord.length())
		return EWordStatus::Wrong_Length;
	else
		return EWordStatus::OK;
}

int32 FBullCowGame::GetHiddenWordLength() const
{
	return HiddenWord.length();
}

FBullCowCount FBullCowGame::SubmitValidGuess(FString Guess)
{
	CurrentTry++;
	FBullCowCount BullCowCount;
	
	const int HiddenWordLength = HiddenWord.length();
	for (int32 i = 0; i < HiddenWordLength; i++)
	{
		for (int32 j = 0; j < HiddenWordLength; j++)
		{
			if (Guess[i] == HiddenWord[j])
			{
				if (i == j)
					BullCowCount.Bulls++;
				else
					BullCowCount.Cows++;

			}
		}
	}
	if (BullCowCount.Bulls == HiddenWordLength)
		bGameWon = true;


	return BullCowCount;
}
