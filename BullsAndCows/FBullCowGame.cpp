#include "FBullCowGame.h"

FBullCowGame::FBullCowGame(int Difficulty)
{	
	CurrentTry = 1;
	SetMaxTries(Difficulty);
	Score = 0;
	CurrentWordIndex = 0;
	
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 26; j++)
			Words[i][j] = new FWord;
	
	}
	DataInitialisation();
	GenerateWord(Difficulty);

	for (int i = 1; i <= 5; i++)
	{
		GameWords[i - 1] = GenerateWord(Difficulty);
	}
	HiddenWord = GameWords[CurrentWordIndex];
	return;
}
FWord* FBullCowGame::GenerateWord(int Difficulty)
{
	
	int WordIndex = std::rand() % 26;
	
	return Words[Difficulty - 1][WordIndex];
}

void FBullCowGame::DataInitialisation()
{
	
	int Row = 0;
	int Col = 0;

	//Difficulty 0
	Words[Row][Col]->Word = "pro";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro.";
	Col++;

	Words[Row][Col]->Word = "mar";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Used As Shortform For Month March";
	Words[Row][Col]->Award = "Did You Know?! According to the oldest Roman calendars, one year was ten months long, beginning in March and ending in December.";
	Col++;

	Words[Row][Col]->Word = "car";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "A Four Wheeler";
	Words[Row][Col]->Award = "Did You Know?! About 165,000 cars are produced every day.";
	Col++;

	Words[Row][Col]->Word = "mac";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Apple Product";
	Words[Row][Col]->Award = "Did You Know?! Apple Max Was Found on April Fool's Day 1976.";
	Col++;

	Words[Row][Col]->Word = "did";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Past Of 'Do'";
	Words[Row][Col]->Award = "Did You Know?! There is a disorder called Dissociative Identitiy Disorder (DID)";
	Col++;


	Words[Row][Col]->Word = "age";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "What Variable of Life Goes Under Year++";
	Words[Row][Col]->Award = "Did You Know?! Jeanne Calment Of France Lived For 122 Years, The Only Woman Who Told Her Age Proudly";
	Col++;

	Words[Row][Col]->Word = "era";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "A Long And Distinct Period Of History.";
	Words[Row][Col]->Award = "Did You Know?! 2014 Was An Era Of Cyber Attacks, I Mean Most Virtual Damage To Companies Was Done in this Year";
	Col++;

	Words[Row][Col]->Word = "sir";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "And Then An Army Officer Shouted, '___ Yes ___'";
	Words[Row][Col]->Award = "Did You Know?! GTA Vice City Had A Mission called 'Sir,Yes,Sir' in which you blew up whole city with a stolen tank, Memories!!";
	Col++;

	Words[Row][Col]->Word = "lag";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "I Died In the game because of the STUPID ___";
	Words[Row][Col]->Award = "Did You Know?! There Is a disease called jet lag having no cure";
	Col++;

	Words[Row][Col]->Word = "ash";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "'I was chokin' in the crowd, Building my rain up in the cloud, Falling like ___ to the ground--Imagine Dragons,Believer'";
	Words[Row][Col]->Award = "Did You Know?! Ash Ketchum From Pokemon is known as Satoshi in Japan";
	Col++;

	Words[Row][Col]->Word = "ego";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Reciprocal Of Knowledge(Starts With e)";
	Words[Row][Col]->Award = "Did You Know?! Ego Starts To Develop in human when he/she is only 3 years old";
	Col++;

	Words[Row][Col]->Word = "god";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "'You Don't Fuck With The ___'(Singular)-Mundus, Devil May Cry";
	Words[Row][Col]->Award = "Who Am I To Write A Fact About God Anyway";
	Col++;

	Words[Row][Col]->Word = "jam";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Bread And ___";
	Words[Row][Col]->Award = "Jam neither is Considered as Solid nor Liquid but Condiment";
	Col++;

	Words[Row][Col]->Word = "air";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "We Breathe It Everyday";
	Words[Row][Col]->Award = "It Keeps Us Alive xD";
	Col++;

	Words[Row][Col]->Word = "oil";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Hair___, we apply it on our Hair";
	Words[Row][Col]->Award = "Did You know?! Only 50% Of Crude oil is converted into fuel";
	Col++;

	Words[Row][Col]->Word = "art";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "class 12 stream Humanities other name but without 's' in the end";
	Words[Row][Col]->Award = "Did You Know?! Art used to be an olmypic event";
	Col++;

	Words[Row][Col]->Word = "git";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "___hub, software engineer's hub where they share source codes";
	Words[Row][Col]->Award = "Git Comfortable with using Git, Git it??";
	Col++;

	Words[Row][Col]->Word = "get";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "___ set go!!";
	Words[Row][Col]->Award = "Did You Know?! go is the smallest sentence one could make";
	Col++;

	Words[Row][Col]->Word = "rat";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Very legendary, that’s some matter-of-fact shit,You're the opposite of stars like '___' spelled backwards--Lift Off,Mike Shinodea";
	Words[Row][Col]->Award = "Did You Know?! Rats take care of injured and sick rats in their group.";
	Col++;

	Words[Row][Col]->Word = "sat";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "shortform used for saturday";
	Words[Row][Col]->Award = "Did You Know?! Saturday takes it name from Saturn, the Romah god of generation,dissolution,plenty,wealth and liberation";
	Col++;

	Words[Row][Col]->Word = "gum";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Chewing ___";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "mug";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "Did You Know?! Kids in North America spend approximately half a billion dollars on bubble gum every year.";
	Col++;

	Words[Row][Col]->Word = "tar";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Used To Make Roads, sticky substance";
	Words[Row][Col]->Award = "Dis You Know?! The last puffs on a cigarette can contain as much as twice the amount of tar as the first puffs";
	Col++;

	Words[Row][Col]->Word = "gym";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "1st January its Full,2nd January no one shows up";
	Words[Row][Col]->Award = "Google+ is the gym of social networking, We all join, but nobody actually uses it. LAUGH GOD DAMNIT";
	Col++;

	Words[Row][Col]->Word = "gay";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "My Roommate Loves me, Who is he??";
	Words[Row][Col]->Award = "Gay Actually means 'Happy', I read it in my 7 standard english textbook";
	Col++;

	Words[Row][Col]->Word = "gun";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "I'm sorry for everything, Oh, everything I've done, From the second that I was born it seems I had a loaded ___, And then I shot, shot, shot a hole through everything I loved";
	Words[Row][Col]->Award = "Did You Know?! I had no award for the Word WOW, wow!!";
	Col++;

	Words[Row][Col]->Word = "zig";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "___ zag";
	Words[Row][Col]->Award = "I litreally gave up at this word for thinking a fact for zig zag, i mean come on, i have to hard code 4(Difficulty)*26(words) description";
	Col++;


	//Difficulty 1
	Row++;
	Col = 0;

	Words[Row][Col]->Word = "arms";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "mars";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "pair";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "duck";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "bios";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;


	Words[Row][Col]->Word = "brag";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "grab";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "bags";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "corn";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "coin";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "drag";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "modi";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "farm";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "form";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "sofa";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "song";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "shit";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "ribs";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "ramp";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "miss";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "rims";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "sort";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "goat";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "visa";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "grow";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "worm";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	//Difficulty 2
	Row++;
	Col = 0;

	Words[Row][Col]->Word = "amigo";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "brags";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "cigar";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "coins";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "corns";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;


	Words[Row][Col]->Word = "magic";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "micro";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "scams";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "drags";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "radio";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "roads";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "hairs";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "marks";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "laser";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "sigma";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "moral";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "human";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "pairs";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "grasp";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "paris";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "prims";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "jeans";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "ramps";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "armor";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "visor";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "grays";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	//Difficulty 3
	Row++;
	Col = 0;

	Words[Row][Col]->Word = "amigos";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "biogas";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "cigars";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "disarm";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "egoism";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "forarms";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "organsm";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "garish";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "majors";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "glamor";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "gloria";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "sailor";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "grains";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "manors";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "organs";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "ransom";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "enigma";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "sigmas";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "saviour";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "ratios";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "morals";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "soring";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "gramps";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "gizmos";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "mayors";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

	Words[Row][Col]->Word = "stigma";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro";
	Col++;

}

void FBullCowGame::SetMaxTries(int Difficulty)
{
	if (Difficulty == 1)
		MaxTries = 8;
	else if (Difficulty == 2)
		MaxTries = 7;
	else if (Difficulty == 3)
		MaxTries = 6;
	else if (Difficulty == 4)
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
	return HiddenWord->WordLength;
}

FBullCowCount FBullCowGame::SubmitValidGuess(std::string Guess)
{
	CurrentTry++;
	FBullCowCount BullCowCount;
	
	const int HiddenWordLength = HiddenWord->WordLength;
	for (int i = 0; i < HiddenWordLength; i++)
	{
		for (int j = 0; j < HiddenWordLength; j++)
		{
			auto Word= HiddenWord->Word;
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
	HiddenWord = GameWords[CurrentWordIndex];
	CurrentTry = 1;
}

