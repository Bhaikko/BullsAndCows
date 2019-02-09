#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string>
#include "FBullCowGame.h"
//#include "Record.h"

FBullCowGame* BCGame;
//Record* Records;

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
		if (!bWordShown)
		{
			std::cout << "Level: " << CurrentLevel << std::endl;
			std::cout << "Hint: " << BCGame->GetCurrentWord()->Hint << std::endl;
			bWordShown = true;
		}
		std::string Guess=GetValidGuess();
		if (Guess == BCGame->GetCurrentWord()->Word)
		{
			std::cout << "Well Done!!" << std::endl;
			std::cout << "Here's Your Reward : "<< BCGame->GetCurrentWord()->Award << std::endl;
			std::cout << "You've Passed Level " << CurrentLevel << " Of 5 Levels" << std::endl;
			CurrentLevel++;

			int Award = BCGame->GetMaxTries() - BCGame->GetCurrentTry() + 1;
			BCGame->AddScore(Award*BCGame->GetScoreToAdd());

			BCGame->NextWord();
			bWordShown = false;	
		}
		else if (BCGame->GetCurrentTry() == BCGame->GetMaxTries())
		{
			std::cout << "The Word Is" << BCGame->GetCurrentWord()->Word << std::endl;
			std::cout << "Better Luck Next Time" << std::endl;
			break;
		}
		else
		{
			FBullCowCount Result = BCGame->SubmitValidGuess(Guess);
			std::cout << "Bull: " << Result.Bulls << " Cows: " << Result.Cows << std::endl;
		}
		std::cout << std::endl;

	}	
	std::cout << "Your Score: " << BCGame->ReturnCurrentScore() << std::endl;
	BCGame->EvaluateScore(Difficulty);
	std::cout << "Press 9 For Menu." << std::endl;
	ChoiceInput();
	

}

void IntroArt()
{
	std::cout << "       /)  (\ " << std::endl;
	std::cout << "  .-._((,~~.))_.-," << std::endl;
	std::cout << "   `=.   99   ,='" << std::endl;
	std::cout << "     / ,o~~o. \\ " << std::endl;
	std::cout << "    { { .__. } } " << std::endl;
	std::cout << "     ) `~~~\\' (" << std::endl;
	std::cout << "    /`-._  _\\.-\\ " << std::endl;
	std::cout << "   /         )  \\ " << std::endl;
	std::cout << "  ,-X        #   X-. " << std::endl;
	std::cout << " /   \\          /   \\ " << std::endl;
	std::cout << "(     )| |  | |(     ) " << std::endl;
	std::cout << " \\   / | |  | | \   / " << std::endl;
	std::cout << "  \\_(.-( )--( )-.)_/ " << std::endl;
	std::cout << "   /_,\\ ) /  \ ( /._\\ " << std::endl;
	std::cout << "      /_,\\  /._\\ " << std::endl;
	std::cout << std::endl;
		
}
void PrintIntro()
{
	system("cls");
	IntroArt();
	std::cout << "Welcome To Bulls And Cows,A Fun Word Game." << std::endl;
	std::cout << "1. New Game" << std::endl;
	std::cout << "2. High Scores" << std::endl;
	std::cout << "3. Help" << std::endl;
	std::cout << "4. Credits" << std::endl;
	std::cout << "5. Delete Record" << std::endl;
	std::cout << "6. Exit" << std::endl;
	std::cout << "Press Corresponding Numbers For Selecting Options" << std::endl;
	std::cout << "If You Are Playing For First Time Then Do Mind Checking Help" << std::endl;
	

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
		BCGame->ShowScore();
		std::cout << "Press 9 For Menu" << std::endl;
		ChoiceInput();
		break;

	case 3:
		Help();
		break;

	case 4:
		Credits();
		break;

	case 5:
		BCGame->DeleteRecord();
		break;

	case 6:
		exit(0);
		return;

	}

	PrintIntro();

}

void Help()
{
	system("cls");
	std::cout << ":::Rules:::" << std::endl;
	std::cout << "This Game Is All About Guessing An Isogram" << std::endl;
	std::cout << "An 'Isogram' Is Word Having No Duplicates" << std::endl;
	std::cout << "You Will be given 5 Words one by one to guess" << std::endl;
	std::cout << "Word Can Be Either A Noun or Adjective or Verb " << std::endl;
	std::cout << std::endl;

	std::cout << ":::Difficulty Options:::" << std::endl << std::endl;
	std::cout << "Noob:( 3 --- Word Length, 8 Guess Chances and 10 Score Per Correct Guess " << std::endl << std::endl;
	std::cout << "I'm Getting Hang Of This:| --- 4 Word Length, 7 Guess Chances and 20 Score Per Correct Guess " << std::endl << std::endl;
	std::cout << "Alright,This Seems Easy:D --- 5 Word Length, 6 Guess Chances and 30 Score Per Correct Guess" << std::endl << std::endl;
	std::cout << "Pro B) --- 6 Word Length, 5 Guess Chances and 50 Score Per Correct Guess" << std::endl << std::endl;
	std::cout << std::endl;

	std::cout << ":::Terminology:::" << std::endl;
	std::cout << "Bulls: Letters That Are Guessed Correctly and Are on Correct Position" << std::endl;
	std::cout << "Cows: Letters That Are Guessed Correctly and Are on Incorrect Position" << std::endl;

	std::cout << std::endl;
	std::cout << ":::NOTE:::" << std::endl;
	std::cout << "Guesses Like Less-Length Words Or Non-Isograms Won't Be Accepted As Valid Guess And Won't Effect The Score :)" << std::endl;
	std::cout << "All The Words Are LowerCase" << std::endl;
	std::cout << "Some Words Can Be Plural Instead Of Singular Like 'Mayors' Instead Of 'Mayor'" << std::endl;
	std::cout << std::endl;
	std::cout << "Press 9 For Menu" << std::endl;
	ChoiceInput();
	return;
}

void Credits()
{
	system("cls");
	std::cout << "Game Made By:- Siddharth 'Bhaikko' Pawar" << std::endl;
	std::cout << std::endl;
	std::cout << "Isograms References 'https://www.morewords.com/words-within-plus/isogram/'" << std::endl;
	std::cout << std::endl;
	std::cout << "Instructors: Ben Tristm And Sam Pattuzzi" << std::endl;
	std::cout << std::endl;
	std::cout << "Intro Art By Hayley Jane Wakenshaw" << std::endl;
	std::cout << std::endl;

	std::cout << "Press 9 For Menu" << std::endl;
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