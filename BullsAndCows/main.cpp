#include <iostream>
#include <string>
#include "FBullCowGame.h"

FBullCowGame* BCGame;

void PrintIntro();
std::string GetValidGuess();
int Difficulty();
void Help();
void Credits();

void Debug()
{
	std::cout << "Inside" << std::endl;
}

void ChoiceInput()
{
	int Choice;
	do
	{
		std::cin >> Choice;
		if (Choice == 9)
		{
			PrintIntro();
			return;
		}
		else
			std::cout << "ENTER VALID INPUT!!!!,DAMNIT" << std::endl;

	} while (Choice != 9);
}

void PlayGame(int Difficulty)
{
	system("cls");
	
	int CurrentLevel = 1;
	bool bWordShown = false;
	while(CurrentLevel<=5&&BCGame->GetCurrentTry()<BCGame->GetMaxTries())
	{
		//Debug();
		if (!bWordShown)
		{
			std::cout << BCGame->GetCurrentWord()->Hint << std::endl;;
			bWordShown = true;
		}
		std::string Guess=GetValidGuess();
		if (Guess == BCGame->GetCurrentWord()->Word)
		{
			std::cout << "Well Done!!" << std::endl;
			std::cout << BCGame->GetCurrentWord()->Award << std::endl;
			std::cout << "You've Passed Level " << CurrentLevel << " Of 5 Levels";
			CurrentLevel++;
			BCGame->NextWord();
			bWordShown = false;
			
		}
		else if (BCGame->GetCurrentTry() == BCGame->GetMaxTries())
		{
			std::cout << "Better Luck Next Time" << std::endl;
			//EvaluateScore();
			return;
		}
		else
		{
			FBullCowCount Result = BCGame->SubmitValidGuess(Guess);
			std::cout << "Bull: " << Result.Bulls << " Cows: " << Result.Cows << std::endl;
		}
	}
	//EvaluateScore();

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
	

	int Choice;
	std::cin >> Choice;

	int GameDifficulty;
	switch (Choice)
	{
	case 1:
		GameDifficulty = Difficulty();
		BCGame = new FBullCowGame(GameDifficulty);		
		PlayGame(GameDifficulty);
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

	return;

}

void Help()
{
	system("cls");
	std::cout << ":::Rules:::" << std::endl;
	std::cout << "This Game Is All About Guessing An Isogram" << std::endl;
	std::cout << "An 'Isogram' Is Word Having No Duplicates" << std::endl;
	std::cout << "You Will be given 5 Words one by one to guess" << std::endl;
	
	std::cout << "Difficulty Options" << std::endl << std::endl;
	std::cout << "Noob:( 3 Word Length, 8 Guess Chances and 10 Score Per Correct Guess " << std::endl << std::endl;
	std::cout << "I'm Getting Hang Of This:| 4 Word Length, 7 Guess Chances and 20 Score Per Correct Guess " << std::endl << std::endl;
	std::cout << "Alright,This Seems Easy:D 5 Word Length, 6 Guess Chances and 30 Score Per Correct Guess" << std::endl << std::endl;
	std::cout << "Pro B)  6 Word Length, 5 Guess Chances and 50 Score Per Correct Guess" << std::endl << std::endl;

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

int Difficulty()
{
	system("cls");
	std::cout << "Choose Difficulty" << std::endl;
	int Choice;
	std::cout << "1. Noob :(" << std::endl;
	std::cout << "2. I'm Getting Hang Of This :|" << std::endl;
	std::cout << "3. Alright,This Seems Easy :D" << std::endl;
	std::cout << "4. Pro B)" << std::endl;

	std::cin >> Choice;
	return Choice;

}

std::string GetValidGuess()
{
	EWordStatus Status = EWordStatus::Invalid_Status;
	std::string GUESS = "";
	do
	{
		std::cout << "Try " << BCGame->GetCurrentTry() << " of " << BCGame->GetMaxTries() << " Enter Your Guess: ";

		std::cin >> GUESS;
		Status = BCGame->CheckValidGuess(GUESS);
		switch (Status)
		{
		case EWordStatus::Wrong_Length:
			std::cout << "Please Enter A " << BCGame->GetHiddenWordLength() << " letter Word. " << std::endl << std::endl;
			break;
		case EWordStatus::Not_Isogram:
			std::cout << "Please Enter A Word Without Repeating Letters " << std::endl << std::endl;
			break;
		case EWordStatus::Not_Lowercase:
			std::cout << "Please Enter A Lowercase word" << std::endl << std::endl;
			break;
		default:
			break;

		}


	} while (Status != EWordStatus::OK);

	return GUESS;
}


int main()
{
	system("cls");
	PrintIntro();
	return 0;

}