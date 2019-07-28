#pragma once
#include "FBullCowGame.h"
#include <ctime>



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
	
	HiddenWord = GameWords[CurrentWordIndex];
	return;
}

void GenerateNumbers(int Numbers[], int Size)
{
	int Num = std::rand() % 26;
	if (Size == 0)
		return;

	for (int i = 0; i < 5; i++)
	{
		if (Numbers[i] == Num)
		{
			GenerateNumbers(Numbers, Size);
			return;
		}
	}
	Numbers[Size - 1] = Num;

	GenerateNumbers(Numbers, Size - 1);
}

void FBullCowGame::GenerateWord(int Difficulty)
{	
	int WordIndex;
	
	int Numbers[5];
	for (int i = 0; i < 5; i++)
		Numbers[i] = -1;

	std::srand(time(NULL));
	GenerateNumbers(Numbers, 5);

	for (int i = 0; i < 5; i++)
		GameWords[i] = Words[Difficulty - 1][Numbers[i]];

	/*
	for (int i = 0; i < 5; i++)
	{
		WordIndex = std::rand() % 26;
		GameWords[i] = Words[Difficulty - 1][WordIndex];
	}
	*/
	

}

void FBullCowGame::DataInitialisation()
{
	
	int Row = 0;
	int Col = 0;

	//Difficulty 1
	Words[Row][Col]->Word = "pro";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Our Highest Difficulty";
	Words[Row][Col]->Award = "If You Are At This Difficulty,It'll Take You Decades To Play At Pro.";
	Col++;

	Words[Row][Col]->Word = "mar";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Used As Shortform For Month March";
	Words[Row][Col]->Award = "Did You Know?! According To The Oldest Roman Calendars, One Year Was Ten Months Long, Beginning In March And Ending In December.";
	Col++;

	Words[Row][Col]->Word = "car";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "A Four Wheeler";
	Words[Row][Col]->Award = "Did You Know?! About 165,000 Cars Are Produced Every Day.";
	Col++;

	Words[Row][Col]->Word = "mac";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Apple Product";
	Words[Row][Col]->Award = "Did You Know?! Apple Max Was Found on April Fool's Day 1976.";
	Col++;

	Words[Row][Col]->Word = "die";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "The Thing I Want to do now";
	Words[Row][Col]->Award = "I'm Serious";
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
	Words[Row][Col]->Hint = "And Then An Army Officer Shouted, '--- Yes ---'";
	Words[Row][Col]->Award = "Did You Know?! GTA Vice City Had A Mission called 'Sir,Yes,Sir' in which you blew up whole city with a stolen tank, Memories!!";
	Col++;

	Words[Row][Col]->Word = "lag";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "I Died In the game because of the STUPID ---";
	Words[Row][Col]->Award = "Did You Know?! There Is A Disease Called Jet Lag Having No Cure";
	Col++;

	Words[Row][Col]->Word = "ash";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "'I Was Chokin' In The Crowd,\nBuilding My Rain Up In The Cloud,\nFalling Like --- To The Ground'\n--Believer, Imagine Dragons";
	Words[Row][Col]->Award = "Did You Know?! Ash Ketchum From Pokemon Is Known As Satoshi In Japan";
	Col++;

	Words[Row][Col]->Word = "ego";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Reciprocal Of Knowledge";
	Words[Row][Col]->Award = "Did You Know?! Ego Starts To Develop In Human Ehen He/She Is Only 3 Years Old";
	Col++;

	Words[Row][Col]->Word = "god";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "'You Don't Fuck With The ---'\n-Mundus, DMC Devil May Cry 2013";
	Words[Row][Col]->Award = "Who Am I To Write A Fact About God Anyway";
	Col++;

	Words[Row][Col]->Word = "jam";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Bread And ---";
	Words[Row][Col]->Award = "Did You Know?! Jam Neither Is Considered As Solid Nor Liquid But Condiment";
	Col++;

	Words[Row][Col]->Word = "air";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "We Breathe It Everyday";
	Words[Row][Col]->Award = "It Keeps Us Alive xD";
	Col++;

	Words[Row][Col]->Word = "oil";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Hair---, We Apply It On Our Hair";
	Words[Row][Col]->Award = "Did You know?! Only 50% Of Crude Oil Is Converted Into Fuel";
	Col++;

	Words[Row][Col]->Word = "art";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Grade 12 Stream 'Humanities' Other Name Without 's' In The End";
	Words[Row][Col]->Award = "Did You Know?! Art Used To Be An Olmypic Event";
	Col++;

	Words[Row][Col]->Word = "git";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "---hub, Software Engineer's Hub Where They Share Source Codes";
	Words[Row][Col]->Award = "Git Comfortable With Using Git, Git It??";
	Col++;

	Words[Row][Col]->Word = "get";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "--- Set Go!!";
	Words[Row][Col]->Award = "Did You Know?! Go Is The Smallest Sentence One Could Make";
	Col++;

	Words[Row][Col]->Word = "rat";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Very Legendary, That�s Some Matter-Of-Fact Shit,\nYou're The Opposite Of Stars Like --- Spelled Backwards\n--Lift Off,Mike Shinoda";
	Words[Row][Col]->Award = "Did You Know?! Rats Take Care Of Injured And Sick Rats In Their Group.";
	Col++;

	Words[Row][Col]->Word = "sat";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Shortform Used For Saturday";
	Words[Row][Col]->Award = "Did You Know?! Saturday Takes It Name From Saturn, The Roman God Of Generation, Dissolution, Plenty, Wealth And Liberation";
	Col++;

	Words[Row][Col]->Word = "gum";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Chewing ---";
	Words[Row][Col]->Award = "Did You Know?! Kids In North America Spend Approximately Half A Billion Dollars On Bubble Gum Every Year";
	Col++;

	Words[Row][Col]->Word = "mug";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Coffee ---";
	Words[Row][Col]->Award = "Did You Know?! Coffee Dates Back To 800AD";
	Col++;

	Words[Row][Col]->Word = "tar";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Used To Make Roads, Sticky Substance";
	Words[Row][Col]->Award = "Did You Know?! The Last Puffs On A Cigarette Can Contain As Much As Twice The Amount Of Tar As The First Puffs";
	Col++;

	Words[Row][Col]->Word = "gym";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "1st January Its Full,2nd January No One Shows Up";
	Words[Row][Col]->Award = "Google+ Is The Gym Of Social Networking, We All Join, But Nobody Actually Uses It. LAUGH GOD DAMNIT";
	Col++;

	Words[Row][Col]->Word = "gay";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "My Roommate Loves Me, Who Is He??";
	Words[Row][Col]->Award = "Gay Actually Means 'Happy', I Read It In My 7 Grade English Textbook";
	Col++;

	Words[Row][Col]->Word = "gun";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "I'm Sorry For Everything, Oh, Everything I've Done,\nFrom The Second That I Was Born It Seems I Had A Loaded ---,\nAnd Then I Shot, Shot, Shot A Hole Through Everything I Loved.\n---Shots, Imagine Dragons";
	Words[Row][Col]->Award = "Did You Know?! Every Day, 7 Children Are Killed And 12 More Are Injured With A Gun";
	Col++;

	Words[Row][Col]->Word = "zig";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "--- zag";
	Words[Row][Col]->Award = "I Literally Gave Up At This Word For Thinking A Fact For Zig Zag, I Mean Come On, I Have To Hard Code 4(Difficulty)*26(Words) Description";
	Col++;


	//Difficulty 2
	Row++;
	Col = 0;

	Words[Row][Col]->Word = "arms";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Fore----";
	Words[Row][Col]->Award = "Did You Know?! The Bone In Your Upper Arm Is Called The Funny Bone";
	Col++;

	Words[Row][Col]->Word = "mars";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Fourth Planet";
	Words[Row][Col]->Award = "Did You Know?! Mars Is Named After Roman God Of War";
	Col++;

	Words[Row][Col]->Word = "pair";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "---- Of Shoes";
	Words[Row][Col]->Award = "Did You Know?! Sneakers Got Their Name Because their Soles Doesn't Make Noise";
	Col++;

	Words[Row][Col]->Word = "duck";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "My Autocorrect Changed F*ck To ----";
	Words[Row][Col]->Award = "Did You Know?! A Male Duck Is Called A Drake, A Female Duck A Hen, And A Baby Duck A Duckling";
	Col++;

	Words[Row][Col]->Word = "bios";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "A Set Of Computer Instructions In Firmware Which Control Input And Output Operations.";
	Words[Row][Col]->Award = "Did You Know?! BIOS Stands For Basic Input Output System";
	Col++;


	Words[Row][Col]->Word = "brag";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "He Keeps ----ing About His Acheivements";
	Words[Row][Col]->Award = "Did You Know?! Brag Is A Gambling Card Game Which Is A Simplified Form Of Poker";
	Col++;

	Words[Row][Col]->Word = "grab";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Go g--- Some Food.";
	Words[Row][Col]->Award = "Did You Know?! Apples Are More Effective Than Coffee At Waking You Up At Morning, Just A Food Fact";
	Col++;

	Words[Row][Col]->Word = "bags";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "A Flexible Container With An Opening At The Top, Used For Carrying Things.";
	Words[Row][Col]->Award = "Did You Know?! 160,000 Plastic Bags Are Used Globally Every Second!";
	Col++;

	Words[Row][Col]->Word = "corn";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "A Popcorn Ancestor";
	Words[Row][Col]->Award = "Did You Know?! Americans Eat Around 17 Billion Quarts Of Popcorn Every Year";
	Col++;

	Words[Row][Col]->Word = "coin";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Bit----";
	Words[Row][Col]->Award = "Did You Know?! Most Coins Can Circulate For About 25 Years Before They Become Too Worn To Be Used Anymore.";
	Col++;

	Words[Row][Col]->Word = "drag";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "----race, Race with Gear Shifting Only in Need For Speed ";
	Words[Row][Col]->Award = "Did You Know?! Drag Races Are For Those Who Are Afraid Of Turns.";
	Col++;

	Words[Row][Col]->Word = "modi";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Indian Prime Minister Last Name";
	Words[Row][Col]->Award = "Did You Know?! After President Obama, Narendra Modi Is The World�S Most Followed Leader On Twitter, Accounting More Than 12 Million Followers.";
	Col++;

	Words[Row][Col]->Word = "farm";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "An Area Of Land And Its Buildings, Used For Growing Crops And Rearing Animals.";
	Words[Row][Col]->Award = "Did You Know?! Each American Farmer Produces Food And Fiber For 165 People Annually, Both In The U.S. And Abroad.";
	Col++;

	Words[Row][Col]->Word = "form";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Shortf---";
	Words[Row][Col]->Award = "Did You Know?! Computer Stands For Common Operating Machine Particularly Used for Technological Engineering Research.";
	Col++;

	Words[Row][Col]->Word = "sofa";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Another Name For Couch";
	Words[Row][Col]->Award = "Did You Know?!  The Word �Sofa� Dates Back To 2000Bc Egypt And Derives From The Arabic Word �Suffah� Which Loosely Translates As �Bench�.";
	Col++;

	Words[Row][Col]->Word = "band";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Linkin Park Is A Rap Metallic Alternative ----.";
	Words[Row][Col]->Award = "RIP Chester Bennington(1976-2017)";
	Col++;

	Words[Row][Col]->Word = "shit";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Bull----!!!";
	Words[Row][Col]->Award = "Did You Know?! Buzz Aldrin Was The Second Man On The Moon... And He Was Also The First Man To Ever Poop In Space.";
	Col++;

	Words[Row][Col]->Word = "ribs";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Shield Of Heart";
	Words[Row][Col]->Award = "Did You Know?! Humans Have Three Types Of Ribs.";
	Col++;

	Words[Row][Col]->Word = "ramp";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "GTA Vice City Had ----Ages Where You Kill Bunch Of Gang Members With Weapons.";
	Words[Row][Col]->Award = "Did You Know?! GTA Vice City Is Loosely Based On The Movie Scarface.";
	Col++;

	Words[Row][Col]->Word = "vice";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "---- President";
	Words[Row][Col]->Award = "Did You Know?! 14 US Vice Presidents Have Become President, 8 Because The President Died In Office, And 1 Because The President Resigned.";
	Col++;

	Words[Row][Col]->Word = "rims";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Part Of A Wheel";
	Words[Row][Col]->Award = "Did You Know?! A Wheel With Teeth Is Called A Gear.";
	Col++;

	Words[Row][Col]->Word = "sort";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "---- Is Used To Arrange Things In Ascending Or Descending Order";
	Words[Row][Col]->Award = "Did You Know?! Bogosort Is Sorting Algorithm Which Is Highly Ineffective In Sorting Array.";
	Col++;

	Words[Row][Col]->Word = "goat";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Capra Aegagrus Hircus, It's Scientific Name";
	Words[Row][Col]->Award = "Did You Know?! Goat Simulator Has Made More Than $12 Million In Revenue";
	Col++;

	Words[Row][Col]->Word = "visa";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "A Document Attached With Passport";
	Words[Row][Col]->Award = "Did You Know?! There Are Three Types Of Visa- Visitor, Work And Study.";
	Col++;

	Words[Row][Col]->Word = "grow";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Everyday I g--- And Learn ";
	Words[Row][Col]->Award = "Did You Know?! Marijuana Can Be Grown Anywhere.";
	Col++;

	Words[Row][Col]->Word = "worm";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Standalone Computer Malware Program That Replicates Itself In Order To Spread To Other Computers";
	Words[Row][Col]->Award = "Did You Know?! There Are Approximately 2700 Different Kinds Of Earthworms.";
	Col++;

	//Difficulty 3
	Row++;
	Col = 0;

	Words[Row][Col]->Word = "amigo";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Hola a----";
	Words[Row][Col]->Award = "Did You Know?! Amigo Is A Spanish Word For 'Friend'.";
	Col++;

	Words[Row][Col]->Word = "brags";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "The Way He Won That Game, He Always b---- About It.";
	Words[Row][Col]->Award = "Did You Know?! Brag Is A Gambling Card Game Which Is A Simplified Form Of Poker";
	Col++;

	Words[Row][Col]->Word = "cigar";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "A Cylinder Of Tobacco Rolled In Tobacco Leaves For Smoking.";
	Words[Row][Col]->Award = "Did You Know?! One Cigar May Contain As Muc Tobacco As An Entire Pace Of Cigrattes.";
	Col++;

	Words[Row][Col]->Word = "coins";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Bit----s";
	Words[Row][Col]->Award = "Did You Know?! Most Coins Can Circulate For About 25 Years Before They Become Too Worn To Be Used Anymore.";
	Col++;

	Words[Row][Col]->Word = "corns";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Popcorns Ancestor";
	Words[Row][Col]->Award = "Did You Know?! Americans Eat Around 17 Billion Quarts Of Popcorn Every Year";
	Col++;


	Words[Row][Col]->Word = "magic";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "What Do Magicians Do?";
	Words[Row][Col]->Award = "Did You Know?! The Earliest Magicians Were Considered Sorcerers, And They Were Believed To Have Supernatural Powers.";
	Col++;

	Words[Row][Col]->Word = "micro";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Unit To The Power 10^-6";
	Words[Row][Col]->Award = "Did You Know?! First Microprocessor By Intel Was Intel 4004, A 4-Bit CPU.";
	Col++;

	Words[Row][Col]->Word = "scams";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "An Illegal Plan For Making Money, Especially One That Involves tricking people.";
	Words[Row][Col]->Award = "Did You Know?! Nigerian Scammer Sold Fake Airport For �242 Million To International Bank";
	Col++;

	Words[Row][Col]->Word = "drags";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "----Race, Race with Gear Shifting Only in Need For Speed ";
	Words[Row][Col]->Award = "Did You Know?! Drag Races Are For Those Who Are Afraid Of Turns.";
	Col++;

	Words[Row][Col]->Word = "radio";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "-----waves Have Frequency Band 300GHz - kHz";
	Words[Row][Col]->Award = "Did You Know?! Early Developments In Radio Were Called 'Wireless Telegraphy'.";
	Col++;

	Words[Row][Col]->Word = "roads";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Tar Is Used To Make r----";
	Words[Row][Col]->Award = "Did You Know?! The Road Network Of India Is Second Largest Road Network In The World With Total Length Of Around 4,320,000 Kilometers";
	Col++;

	Words[Row][Col]->Word = "hairs";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Any Of The Fine Threadlike Strands Growing From The Skin Of Humans";
	Words[Row][Col]->Award = "Did You Know?! On Average, You Shed Aroind 50-150 Strands Of Hair A Day";
	Col++;

	Words[Row][Col]->Word = "marks";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "m---- Of My Exam Cannot Decide My Future.";
	Words[Row][Col]->Award = "Did You Know?! Weight Loss Does Not Cure Stretch Marks But May Minimize The Apperance Of Stretch Marks.";
	Col++;

	Words[Row][Col]->Word = "laser";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Device That Emits Light Through A Process Of Optical Amplification Based On The Stimulated Emission Of Electromagnetic Radiation.";
	Words[Row][Col]->Award = "Did You Know?! Laser Stands For Light Amplification by Stimulated Emission of Radiation";
	Col++;

	Words[Row][Col]->Word = "sigma";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "18th Letter Of Greek Alphabet Which Means 'Sum' In Mathematics.";
	Words[Row][Col]->Award = "Did You Know?! The Word 'Alphabet' Itself Comes From Greek Alphabets 'Alpha' And 'Beta'";
	Col++;

	Words[Row][Col]->Word = "moral";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "m---- Values And Ethics";
	Words[Row][Col]->Award = "Did You Know?! Moral Values And Ethics Is Taught As A Subject In Engineering";
	Col++;

	Words[Row][Col]->Word = "human";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Homo Sapiens";
	Words[Row][Col]->Award = "Did You Know?! The Only Part Without Blood Supply Is Cornea Of Eye";
	Col++;

	Words[Row][Col]->Word = "pairs";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "p---- Of Jeans";
	Words[Row][Col]->Award = "Did You Know?! Asia Produces Half the Jeans Worn by the World.";
	Col++;

	Words[Row][Col]->Word = "grasp";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Seize And Hold Firmly.";
	Words[Row][Col]->Award = "Fact Error 404";
	Col++;

	Words[Row][Col]->Word = "paris";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "France's Capital";
	Words[Row][Col]->Award = "Did You Know?! Effiel Tower Was Supposed To Be A Temporary Installation";
	Col++;

	Words[Row][Col]->Word = "prims";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "p---- Alogorithm, Used To Find Minimum Spanning Tree";
	Words[Row][Col]->Award = "Did You Know?! Google Makes Changes To Its Algorithm Roughly 500 Times Per Year.";
	Col++;

	Words[Row][Col]->Word = "jeans";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Pair Of j----";
	Words[Row][Col]->Award = "Did You Know?! Asia Produces Half the Jeans Worn by the World.";
	Col++;

	Words[Row][Col]->Word = "ramps";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "GTA Vice City Had ----(s)ages Where You Kill Bunch Of Gang Members With Weapons.";
	Words[Row][Col]->Award = "Did You Know?! GTA Vice City Is Loosely Based On The Movie Scarface.";
	Col++;

	Words[Row][Col]->Word = "armor";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "I Hear My Battle Symphony,/nAll The World In Front Of Me,\nIf My ---- Breaks,\nI'll Fuse It Back Together,\n-- Battle Symphony, Linkin Park";
	Words[Row][Col]->Award = "Did You Know?! Knights Had To Practice Putting On And Wearing Their Armor.";
	Col++;

	Words[Row][Col]->Word = "visor";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Sometimes Wore By Tennis Players As Cap";
	Words[Row][Col]->Award = "Did You Know?! Yellow Tennis Balls Were Used At Wimbledon For The First Time In 1986";
	Col++;

	Words[Row][Col]->Word = "grays";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Largest Town In Borough And Unitary Authority Of Thurrock In Essex.";
	Words[Row][Col]->Award = "Did You Know?! Stress Causes The Stem Cells To Leave Our Hair Follucles, Leaving Hair Gray Or White.";
	Col++;

	//Difficulty 4
	Row++;
	Col = 0;

	Words[Row][Col]->Word = "amigos";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Hola a-----";
	Words[Row][Col]->Award = "Did You Know?! Amigo Is A Spanish Word For 'Friend'.";
	Col++;

	Words[Row][Col]->Word = "biogas";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Mixture Of Different Gases Produced By The Breakdown Of Organic Matter In The Absence Of Oxygen.";
	Words[Row][Col]->Award = "Did You Know?! Biogas Plants Have Been Built Since The 1920s";
	Col++;

	Words[Row][Col]->Word = "cigars";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "A Cylinder Of Tobacco Rolled In Tobacco Leaves For Smoking.";
	Words[Row][Col]->Award = "Did You Know?! One Cigar May Contain As Muc Tobacco As An Entire Pace Of Cigrattes.";
	Col++;

	Words[Row][Col]->Word = "disarm";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Take A Weapon Or Weapons Away From Someone.";
	Words[Row][Col]->Award = "Did You Know?! Approximately 20% of gun owners own 65% of the guns";
	Col++;

	Words[Row][Col]->Word = "egoism";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Reciprocal Of Knowledge: ---ism";
	Words[Row][Col]->Award = "Did You Know?! Ego Starts To Develop In Human When He/She Is Only 3 Years Old.";
	Col++;

	Words[Row][Col]->Word = "forearm";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Region Of The Upper Limb Between The Elbow And The Wrist.";
	Words[Row][Col]->Award = "Did You Know?! Forearm And Foot Are Of Same Length.";
	Col++;

	Words[Row][Col]->Word = "organsm";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Feeling Of Intense Sexual Pleasure";
	Words[Row][Col]->Award = "No Award Okay, Not Everyone Is Adult Playing This Game";
	Col++;

	Words[Row][Col]->Word = "garish";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Synonym Of Loud: g-----";
	Words[Row][Col]->Award = "Did You Know?! World's Loudest Sound Was Made By Krakatoa Volanic Eruption In 1883.";
	Col++;

	Words[Row][Col]->Word = "majors";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Tournaments At Higher Level.";
	Words[Row][Col]->Award = "Did You Know?! Cloud9 Was First American Team To Ever Win CSGO Major In 2018.";
	Col++;

	Words[Row][Col]->Word = "glamor";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "An Attractive Or Exciting Quality That Makes Certain People Or Things Seem Appealing.";
	Words[Row][Col]->Award = "Did You Know?! Oxytocin Is Known As Love Drug";
	Col++;

	Words[Row][Col]->Word = "gloria";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "------ Borger, News Reporter From Pew News";
	Words[Row][Col]->Award = "Did You Know?! Pewdiepie's Real Name Is Felix Arvid Ulf Kjellberg";
	Col++;

	Words[Row][Col]->Word = "sailor";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "A Person Whose Job It Is To Work As A Member Of The Crew Of A Commercial Or Naval Ship";
	Words[Row][Col]->Award = "Did You Know?!  A Sailor Who Wishes To Grow A Beard In The Royal Navy Has To Submit A 'Permission To Stop Shaving' Form";
	Col++;

	Words[Row][Col]->Word = "grains";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Wheat Or Any Other Cultivated Cereal Used As Food.";
	Words[Row][Col]->Award = "Did You Know?! People Who Eat Whole Grains As Part Of A Healthy Diet Have A Reduced Risk Of Some Chronic Diseases";
	Col++;

	Words[Row][Col]->Word = "manors";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "A Large Country House With Lands";
	Words[Row][Col]->Award = "Did You Know?! 'The Manor� Is the Second Most Expensive Home In Ihe Country";
	Col++;

	Words[Row][Col]->Word = "organs";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "A Group Of Tissues";
	Words[Row][Col]->Award = "Did You Know?! The Average Adult Human Brain Weighs Three Pounds.";
	Col++;

	Words[Row][Col]->Word = "ransom";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "A Sum Of Money Demanded Or Paid For The Release Of A Captive.";
	Words[Row][Col]->Award = "Did You Know?! Wanna-Cry Ransomware Attack Had An Impact On 200,000 Computers Across 150 Countries.";
	Col++;

	Words[Row][Col]->Word = "enigma";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Batman's Foe Riddler Alternate Name.";
	Words[Row][Col]->Award = "Did You Know?! Riddler First Appeared In Detective Comics #140 October 1948.";
	Col++;

	Words[Row][Col]->Word = "sigmas";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "18th Letter Of Greek Alphabet Which Means 'Sum' In Mathematics.";
	Words[Row][Col]->Award = "Did You Know?! The Word 'Alphabet' Itself Comes From Greek Alphabets 'Alpha' And 'Beta'";
	Col++;

	Words[Row][Col]->Word = "knives";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Kitchen Tool To Cut Vegetables";
	Words[Row][Col]->Award = "Did You Know?! A Pen Knife Is So Named Because It Was Used For Sharpening A Quill To Make A Pen Nib.";
	Col++;

	Words[Row][Col]->Word = "ratios";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "r----- And Propotions";
	Words[Row][Col]->Award = "Did You Know?! If You Write Out PI To Two Decimal Places Backwards, It Spells 'PIE'.";
	Col++;

	Words[Row][Col]->Word = "morals";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "m----- Values And Ethics";
	Words[Row][Col]->Award = "Did You Know?! Moral Values And Ethics Is Served As A Subject In Engineering";
	Col++;

	Words[Row][Col]->Word = "soring";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Intentional Infliction Of Pain To A Horse's Legs";
	Words[Row][Col]->Award = "Did You Know?! Horses Have The Largest Eyes Of Any Land Mammals";
	Col++;

	Words[Row][Col]->Word = "gramps";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Software The Uses Graphviz To Create Relationship Graphs.";
	Words[Row][Col]->Award = "Did You Know?! Over 70 Percent Of Students Have An Idea For An App That Could Improve Business But Only 15 Percent Can Actually Make It.";
	Col++;

	Words[Row][Col]->Word = "gizmos";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "A Gadget, Especially One Whose Name The Speaker Does Not Know Or Cannot Recall.";
	Words[Row][Col]->Award = "Did You Know?! Email Existed Before The World Wide Web.";
	Col++;

	Words[Row][Col]->Word = "mayors";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Person Incharge Of Administration Of City.";
	Words[Row][Col]->Award = "Did You Know?! A Mayor Is Elected For 4 Years For A City.";
	Col++;

	Words[Row][Col]->Word = "stigma";
	Words[Row][Col]->WordLength = Words[Row][Col]->Word.length();
	Words[Row][Col]->Hint = "Female Reproductive Part Of Plants";
	Words[Row][Col]->Award = "Did You Know?! Earth Has More Than 80,000 Species Of Edible Plants.";
	Col++;

}

void FBullCowGame::SetMaxTries(int Difficulty)
{
	if (Difficulty == 1)
	{
		MaxTries = 8;
		ScoreToAdd = 10;
	}		
	else if (Difficulty == 2)
	{
		MaxTries = 7;
		ScoreToAdd = 20;
	}
	else if (Difficulty == 3)
	{
		MaxTries = 6;
		ScoreToAdd = 30;
	}
	else if (Difficulty == 4)
	{
		MaxTries = 5;
		ScoreToAdd = 50;
	}
}

int FBullCowGame::GetMaxTries() const
{	return MaxTries;}

int FBullCowGame::GetCurrentTry() const
{	return CurrentTry;}

int FBullCowGame::GetScoreToAdd()
{
	return ScoreToAdd;
}


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
			auto Word = HiddenWord->Word;
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

void FBullCowGame::AddScore(int Score)
{
	this->Score += Score;
}


bool MinimumScore(Record Record1, Record Record2)
{
	return Record1.GetScore() > Record2.GetScore();
}


void BubbleSort(Record Array[], int Size)
{
	int i, j;
	for (i = 0; i < Size - 1; i++)  
		for (j = 0; j < Size - i - 1; j++)
			if (Array[j].GetScore() < Array[j + 1].GetScore())
				std::swap(Array[j], Array[j + 1]);
}

void FBullCowGame::EvaluateScore(int Difficulty)
{
	

	std::ifstream Score1;
	Score1.open("Record.dat", std::ios::in);

	if (!Score1)
		DefaultRecord();

	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 5; j++)
			Score1.read((char*)&Standings[i][j], sizeof(Standings[i][j]));
		
	Score1.close();
	
	// std::ofstream Score;
	// Score.open("Record.dat", std::ios::out,std::ios::_Noreplace);
	std::fstream Score("Record.dat", std::ios::in);
	if(!Score)
	{
		Score.open("Record.dat", std::ios::out);
		Score.close();
	}
	Score.close();
	Score.open("Record.dat", std::ios::in | std::ios::out);
	
	if (Standings[Difficulty-1][4].GetScore() < this->Score)
	{
		std::cout << "##################" << std::endl;
		std::cout << "New HighScore!!!" << std::endl;
		std::cout << "##################" << std::endl;
		std::cout << "Enter Your Name" << std::endl;
		char Name[20];
		std::cin >> Name;

		Standings[Difficulty - 1][4].ModifyRecord(Name, this->Score);
		BubbleSort(Standings[Difficulty - 1], 5);

		for (int i = 0; i < 4; i++)
			for (int j = 0; j < 5; j++)
				Score.write((char*)&Standings[i][j], sizeof(Standings[i][j]));			

	}

	Score.close();
	
}

void FBullCowGame::DefaultRecord()
{
	std::ofstream Score;
	Score.open("Record.dat");

	int Difficulty = 1;
	

	for (int i = 0; i < 4; i++)
	{
		for (int j = 1; j <= 5; j++)
		{
			char Name[20] = "AAA";
			Record Temp(Name, 0);
			Score.write((char*)&Temp, sizeof(Temp));
			

		}
		Difficulty++;
	}
}

void FBullCowGame::ShowScore()
{

	std::ifstream Score;
	Score.open("Record.dat");

	int Position = 1;
	int Difficulty = 1;

	std::cout << "########################" << std::endl;
	std::cout << "1. Noob :(" << std::endl;
	Difficulty++;
	
	Record Current;
	while (Score.read((char*)&Current, sizeof(Current)))
	{
		std::cout << "Position: " <<Position++ << std::endl;
		Current.ShowRecord();
		std::cout << std::endl;
		if (Position == 6)
		{
			Position = 1;
			
			std::cout << "########################" << std::endl;
			if(Difficulty==2)
				std::cout << "2. I'm Getting Hang Of This :|" << std::endl;
			else if(Difficulty==3)
				std::cout << "3. Alright,This Seems Easy :D" << std::endl;
			else if(Difficulty==4)
				std::cout << "4. Pro B)" << std::endl;

			std::cout << std::endl;
			Difficulty++;

		}
	}
}

void FBullCowGame::DeleteRecord()
{
	std::cout << "Record Deleted" << std::endl;
	std::remove("Record.dat");
}

int FBullCowGame::ReturnCurrentScore()
{
	return this->Score;
}
