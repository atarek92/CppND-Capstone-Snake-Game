# CPPND: Capstone Snake Game Example

This is a starter repo for the Capstone project in the [Udacity C++ Nanodegree Program](https://www.udacity.com/course/c-plus-plus-nanodegree--nd213). The code for this repo was inspired by [this](https://codereview.stackexchange.com/questions/212296/snake-game-in-c-with-sdl) excellent StackOverflow post and set of responses.

<img src="snake_game.gif"/>

## My contribution

My core contribution to this project is adding the `Score` class, this class saves the player score and compares it with previous scores of other players who played this game before to determine if this score is a new record.

So what is expected from my contribution is:
* Recieve the player information from the player
* Load previously saved scores (from a text file previously saved in the build folder)
* Determine the highest score from the saved ones
* Recieve the score of the current player and save it
* Determine if the current score is a new record and congratulate the player in this case

## Rubric Points
* __The project demonstrates an understanding of C++ functions and control structures (A variety of control structures are used in the project. The project code is clearly organized into functions).__
	* The `Score` class is clearly organized into many functions

*  __The project reads data from a file and process the data, or the program writes data to a file (The project reads data from an external file or writes data to a file as part of the necessary operation of the program).__
	* The `SaveScore` function saves the player score on a text file 
	* The `LoadScore` function reads previously saved scores from the text file 

*  __The project accepts user input and processes the input (The project accepts input from a user as part of the necessary operation of the program).__
	* The `getPlayerInfo` function was added in the `main` to receive the player name, which 		  is fed to the `Score`class constructor for processing

*  __The project uses Object Oriented Programming techniques (The project code is organized into classes with class attributes to hold the data, and class methods to perform tasks).__
	* The project has the `Score` class which has many methods inside

*  __Classes use appropriate access specifiers for class members (All class data members are explicitly specified as public, protected, or private).__
	* The `Score` class has some class members that are public and others that are private

*  __Class constructors utilize member initialization lists (All class members that are set to argument values are initialized through member initialization lists).__
	* The `Score` class constructor uses intialization list to initialize some class 		  members.

*  __Classes abstract implementation details from their interfaces (All class member functions document their effects, either through function names, comments, or formal documentation. Member functions do not change program state in undocumented ways).__
	* All the class members in the`Score` has descriptive names that can clearly indicate 		  the function of this member

*  __Classes encapsulate behaviour (Appropriate data and functions are grouped into classes. Member data that is subject to an invariant is hidden from the user. State is accessed via member functions).__
	* The `Score` class has data and functions grouped together and they are hidden from 		  other classes.


## Dependencies for Running Locally
* cmake >= 3.7
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* SDL2 >= 2.0
  * All installation instructions can be found [here](https://wiki.libsdl.org/Installation)
  >Note that for Linux, an `apt` or `apt-get` installation is preferred to building from source. 
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory in the top level directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./SnakeGame`.


## CC Attribution-ShareAlike 4.0 International


Shield: [![CC BY-SA 4.0][cc-by-sa-shield]][cc-by-sa]

This work is licensed under a
[Creative Commons Attribution-ShareAlike 4.0 International License][cc-by-sa].

[![CC BY-SA 4.0][cc-by-sa-image]][cc-by-sa]

[cc-by-sa]: http://creativecommons.org/licenses/by-sa/4.0/
[cc-by-sa-image]: https://licensebuttons.net/l/by-sa/4.0/88x31.png
[cc-by-sa-shield]: https://img.shields.io/badge/License-CC%20BY--SA%204.0-lightgrey.svg
