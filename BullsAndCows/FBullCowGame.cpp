#include "FBullCowGame.h"


FBullCowGame::FBullCowGame(int Difficulty)
{
	CurrentTry = 1;
	Score = 0;
	CurrentWordIndex = 0;

	WordObject = new FWord;

	for (int i = 0; i < 5; i++)
		Words[i] = WordObject->GenerateWord(Difficulty);

	HiddenWord = Words[CurrentWordIndex];

	return;
}

void FBullCowGame::SetMaxTries(int Difficulty)
{
	if (Difficulty == 0)
		MaxTries = 8;
	else if (Difficulty == 1)
		MaxTries = 7;
	else if (Difficulty == 2)
		MaxTries = 6;
	else if (Difficulty == 3)
		MaxTries = 5;
}

int FBullCowGame::GetMaxTries() const
{	return MaxTries;}

int FBullCowGame::GetCurrentTry() const
{	return CurrentTry;}


bool FBullCowGame::IsIsogram(std::string Word) const
{
	if (Word.length() <= 1)
		return true;
	
	std::map<char, int> LetterSeen;
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

bool FBullCowGame::IsLowercase(std::string Word) const
{
	for (auto Letter : Word)
	{
		if(!islower(Letter))
			return false;
	}
	return true;
}

EWordStatus FBullCowGame::CheckValidGuess(std::string GuessWord) const
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

int FBullCowGame::GetHiddenWordLength() const
{
	return HiddenWord->GetWord().length();
}

FBullCowCount FBullCowGame::SubmitValidGuess(std::string Guess)
{
	CurrentTry++;
	FBullCowCount BullCowCount;
	
	const int HiddenWordLength = HiddenWord->GetWord().length();
	for (int i = 0; i < HiddenWordLength; i++)
	{
		for (int j = 0; j < HiddenWordLength; j++)
		{
			auto Word= HiddenWord->GetWord();
			if (Guess[i] == Word[j])
			{
				if (i == j)
					BullCowCount.Bulls++;
				else
					BullCowCount.Cows++;

			}
		}
	}

	return BullCowCount;
}
FWord* FBullCowGame::GetCurrentWord()
{
	return HiddenWord;
}

void FBullCowGame::NextWord()
{
	CurrentWordIndex++;
	HiddenWord = Words[CurrentWordIndex];
	CurrentTry = 0;
}

