#include<iostream>
#include<string>
#include"FBullCowGame.h"

using FText = std::string;
using int32 = int;

void PrintIntro();
void PlayGame();
FText GetValidGuess();
bool AskToPlayAgain();
FBullCowGame BCGame;
void printGameSummary();

int main()
{
	bool bPlayAgain = false;

	PrintIntro();
	do
	{		
		PlayGame();		
		bPlayAgain = AskToPlayAgain();
	} while (bPlayAgain);

	return 0;

}

void PrintIntro()
{

	std::cout << "/n/nWelcome To Bulls And Cows,A Fun Word Game." << std::endl;
	std::cout << "Can You Guess The " << BCGame.GetHiddenWordLength() << " Letter Isogram I'm Thinking Of?" << std::endl;

	std::cout << std::endl;
	return;

}
void PlayGame()
{
	BCGame.Reset();

	int32 MaxTries=BCGame.GetMaxTries();
	while(!BCGame.IsGameWon()&&BCGame.GetCurrentTry()<=BCGame.GetMaxTries())
	{
		FText GUESS = GetValidGuess();
		FBullCowCount Count = BCGame.SubmitValidGuess(GUESS);
		std::cout << "The Guess Word Is :"<< GUESS << std::endl;
		std::cout << "Bulls :" << Count.Bulls << " . Cows: " << Count.Cows << std::endl << std::endl;
	}
	printGameSummary();
	return;	

}
void printGameSummary()
{
	if (BCGame.IsGameWon())
		std::cout << "You Won!!" << std::endl;
	else
		std::cout << "Better Luck Next Time." << std::endl;

}

FText GetValidGuess()
{
	EWordStatus Status = EWordStatus::Invalid_Status;
	FText GUESS = "";
	do
	{
		
		std::cout << "Try " << BCGame.GetCurrentTry()<<" of "<<BCGame.GetMaxTries() << " Enter Your Guess: ";
		getline(std::cin, GUESS);

		Status = BCGame.CheckValidGuess(GUESS);
		switch (Status)
		{
		case EWordStatus::Wrong_Length:
			std::cout << "Please Enter A " << BCGame.GetHiddenWordLength() << " letter Word. " << std::endl << std::endl;
			break;
		case EWordStatus::Not_Isogram:
			std::cout << "Please Enter A Word Without Repeating Letters " << std::endl<<std::endl;
			break;
		case EWordStatus::Not_Lowercase:
			std::cout << "Please Enter A Lowercase word" << std::endl<<std::endl;
			break;
		default:
			break;

		}


	} while (Status != EWordStatus::OK);
	
	return GUESS;
}

bool AskToPlayAgain()
{
	FText choice = "";
	std::cout << "Do you want to play again with the same word?(Y/N)" << std::endl;
	std::getline(std::cin, choice);
	
	return (choice[0] == 'y') || (choice[0] == 'Y');

}