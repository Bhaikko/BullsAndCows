# BullsAndCows
BullsAndCows is a "Guess The Word Game" in which hints are provided to the player and player has to make a guess according to the hint.

The Game Includes 4 Difficulty levels :

| S. No. | Difficulty               | Word Length | Max Guesses | Score Per Correct Guess |
|:------:|:------------------------:|:-----------:|:-----------:|:-----------------------:|
|    1   | Noob                     |      3      |      8      |        10 points        |
|    2   | I'm Getting Hang Of This |      4      |      7      |        20 points        |
|    3   | Alright, This Seems East |      5      |      6      |        30 points        |
|    4   |            Pro           |      6      |      5      |        50 points        |

The game is command line only which means the navigation is done using numbers only.
The game keeps track of your scores of each difficulty seperately.

All the help required for playing the game is included within the game.
Have Fun :)

## Getting Started
These are the instructions for compiling or running the game.

### Prerequisites
Any cpp compiler can be used to compile and play the game. For e.g g++.
The game uses no external libraries, all the in-built standard libraries are used.

### Installing
If you are on windows, you can simply run the BullsAndCows.exe file to play the game provided in the release tab of repo.
However, if you are compiling the code to play.
Compile the **main.cpp** inside the BullsAndCows folder using any cpp compiler. 

To Compile the code, use
```
  g++ FBullCowGame.cpp FWord.cpp Record.cpp main.cpp 
  ./a.out
```

## Screenshots
### Menu Screen
<img src="https://github.com/Bhaikko/BullsAndCows/blob/master/Screenshots/Menu.png"
     style="float: left; margin-right: 10px;" />
     
### Gameplay
<img src="https://github.com/Bhaikko/BullsAndCows/blob/master/Screenshots/Gameplay.png"
     style="float: left; margin-right: 10px;" />
     
### Highscore
<img src="https://github.com/Bhaikko/BullsAndCows/blob/master/Screenshots/Highscores.png"
     style="float: left; margin-right: 10px;" />
     
## Contributions and References
### Mentors
[Ben Tristem](https://www.udemy.com/user/bentristem/)<br>
[Sam Pattuzzi](https://www.udemy.com/user/samuel-pattuzzi/)<br>

### References
[Isogram References](https://www.morewords.com/words-within-plus/isogram/)<br>
[Menu ASCII Art by 'Hayley Jane Wakenshaw'](https://www.asciiart.eu/animals/cows)


## Acknowledgments
It's my first ever video game I created, someone has to start somewhere.
