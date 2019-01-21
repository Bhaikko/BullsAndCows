#include <iostream>
#include <string>
#include "FBullCowGame.h"


using FText = std::string;
using int32 = int;

void PrintIntro();
void PlayGame();
FText GetValidGuess();
bool AskToPlayAgain();
FBullCowGame BCGame;
void printGameSummary();
void Game();

int main()
{
	system("cls");

	Game();
	return 0;

}

void Game()
{
	bool bPlayAgain = false;
	system("cls");
	
	do
	{
		PrintIntro();
		bPlayAgain = AskToPlayAgain();
	} while (bPlayAgain);
}


void PlayGame()
{
	system("cls");
	BCGame.Reset(Difficulty);


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
void ChoiceInput()
{
	int Choice;
	do
	{
		std::cin >> Choice;
		if (Choice == 9)
		{
			Game();
			return;
		}
		else
			std::cout << "ENTER VALID INPUT!!!!,DAMNIT" << std::endl;

	} while (Choice != 9);
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

void Help()
{
	system("cls");
	std::cout << ":::Rules:::" << std::endl;
	std::cout << "This Game Is All About Guessing An Isogram" << std::endl;
	std::cout << "An 'Isogram' Is Word Having No Duplicates" << std::endl;
	std::cout << "You Will be given 5 Words one by one to guess" << std::endl;
	
	std::cout << "Difficulty Options" << std::endl;
	std::cout << "Noob:( 3 Word Length, 8 Guess Chances and 10 Score Per Correct Guess " << std::endl;
	std::cout << "I'm Getting Hang Of This:| 4 Word Length, 7 Guess Chances and 20 Score Per Correct Guess " << std::endl;
	std::cout << "Alright,This Seems Easy:D 5 Word Length, 6 Guess Chances and 30 Score Per Correct Guess" << std::endl;
	std::cout << "Pro B)  6 Word Length, 5 Guess Chances and 50 Score Per Correct Guess" << std::endl;

	std::cout << "You can press 9 Anytime For Menu outside Game" << std::endl;
	ChoiceInput();
	return;




}

void Credits()
{
	system("cls");
	std::cout << "Game Made By:- Siddharth 'Bhaikko' Pawar" << std::endl;
	std::cout << "Isograms References 'https://www.morewords.com/words-within-plus/isogram/'" << std::endl;
	std::cout << "Instructors: Ben Tristm And Sam Pattuzzi" << std::endl;
	ChoiceInput();
	return;

}



void PrintIntro()
{
	system("cls");
	std::cout << "Welcome To Bulls And Cows,A Fun Word Game." << std::endl;
	std::cout << "1. New Game" << std::endl;
	std::cout << "2. High Scores" << std::endl;
	std::cout << "3. Help" << std::endl;
	std::cout << "4. Credits" << std::endl;
	std::cout << "5. Exit" << std::endl;
	std::cout << "Press Corresponding Numbers For Selection Options" << std::endl;
	std::cout << "Press 9 For Menu" << std::endl;

	int Choice;
	std::cin >> Choice;

	switch (Choice)
	{
	case 1:
		PlayGame();
		break;

	case 2:
		//PrintScore();
		break;

	case 3:
		Help();
		break;

	case 4:
		Credits();
		break;

	case 5:
		return;

	}



	std::cout << std::endl;
	return;

}