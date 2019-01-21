#pragma once
#include<string>

class FWord
{
private:
	
	int WordLength;
	std::string Word;
	std::string Hint;
	std::string Award;

	FWord* Words[4][26];

public:

	FWord();

	FWord* GenerateWord(int Difficulty);
	
};




