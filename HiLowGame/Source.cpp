// Valan Adan
// Date: 01/22/24
// Class: CSCI 2380 02P
// Semester: Spring 2024
// Instructor: Marzieh Ayati
#include <iostream> // Used for cin and cout
#include <stdlib.h> // Used to generate random number using rand method
#include <string> // Used to be able to use string
#include<time.h> // Used to reset the machine time to generate different random numbers
using namespace std;
int main()
{
	/*Seed the random number generator*/
	srand(static_cast<int>(time(NULL)));
	int targetNumber = rand() % 100; // generates a random number from 1 to 100
	cout << "Let's play a Number Guessing Game! What is your name ?" << endl;
	string name;
	cin >> name;
	cout << "Hello, " << name << "! Now let us play the game! " << endl;
	/********************************************************
	This is a Hi-Low game. A random number from 1 to 100 is generate.
	1. Ask the user to guess the number.
	2. If the user guess right, print bingo. The game is over.
	3. If the user's guess is too high or too low, the program informs the user of that fact and asks for another guess.
	4. This repeats until the user gets the number correct.
	**********************************************************/
	// *************To DO***********************
	int guess;
	do {
		cout << "\nGuess the number the computer randomly picked between 1 - 100: ";
		cin >> guess;
		if (guess < targetNumber)
			cout << "Sorry, your guess is too low\n";
		else if (guess > targetNumber)
			cout << "Sorry, your guess is too high\n";
		// Otherwise
		else {
			cout << "You guessed right, you win!\n\n";
			break;
		}
	} while (guess != targetNumber);
	/********* BONUS POINT*********
	keep track of the first three numbers that user guessed and
	print them out at the end
	Hint: You can use array to store these 3 numbers
	******************************/
	system("pause");
	return 0;
}
