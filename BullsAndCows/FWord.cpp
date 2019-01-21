#include "FWord.h"

FWord::FWord()
{	
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 26; j++)
			Words[i][j] = new FWord;
	}
	int Row = 0;
	int Col = 0;

	//Difficulty 0

	Words[Row][Col]->Word = "pro";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "mar";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Used As Shortform For Month March";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "car";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "A Four Wheeler";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "mac";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Apple Product";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "did";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = " ";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "age";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "era";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "sir";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "lag";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "ash";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "ego";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "god";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "jam";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "air";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "oil";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "art";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "git";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "get";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "rat";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "sat";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "gum";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "mug";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "tar";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "gym";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "gay";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "gym";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "zig";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	//Difficulty 1
	Row++;
	Col = 0;
	
	Words[Row][Col]->Word = "arms";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "mars";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "pair";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "duck";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "bios";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "brag";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "grab";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "bags";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "corn";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "coin";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "drag";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "modi";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "farm";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "form";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "sofa";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "song";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "shit";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "ribs";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "ramp";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "miss";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "rims";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "sort";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "goat";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "visa";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "grow";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "worm";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	//Difficulty 2
	Row++;
	Col = 0;

	Words[Row][Col]->Word = "amigo";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "brags";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "cigar";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "coins";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "corns";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "magic";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "micro";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "scams";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "drags";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "radio";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "roads";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "hairs";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "marks";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "laser";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "sigma";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "moral";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "human";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "pairs";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "grasp";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "paris";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "prims";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "jeans";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "ramps";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "armor";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "visor";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "grays";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	//Difficulty 3
	Row++;
	Col = 0;

	Words[Row][Col]->Word = "amigos";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "biogas";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "cigars";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "disarm";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "egoism";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "forarms";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "organsm";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "garish";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "majors";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "glamor";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "gloria";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "sailor";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "grains";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "manors";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "organs";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "ransom";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "enigma";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "sigmas";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "saviour";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "ratios";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "morals";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "soring";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "gramps";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "gizmos";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "mayors";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "stigma";
	Words[Row][Col]->WordLength = Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;
}

FWord* FWord::GenerateWord(int Difficulty)
{
	int WordIndex = rand() % 5;
	return Words[WordIndex][Difficulty];
}
