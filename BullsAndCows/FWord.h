#pragma once
#include<string>
#include <iostream>

class FWord
{
private:
	
	int WordLength;
	std::string Word;
	std::string Hint;
	std::string Award;

	FWord* Words[4][5];
	void DataInitialisation();

public:

	FWord();
	
	std::string GetWord() const;
	std::string GetHint() const;
	std::string GetAward() const;

	FWord* GenerateWord(int Difficulty);
	
	
};




