//TO DO **************************************
//Valan Adan
//Miguel Benavides

#include <iostream>
#include <string>
#include <vector>
using namespace std;

/* Write a function checkOdd such that
input: an int
output: boolean
function: Return true if the number is an odd number and return false otherwise
Hint: % is used for module operation. n%m gives you the remainder after dividing n to m.
for example 7%3 = 1 because 7 = 3*2 + 1, then 1 is the remainder.
*/
//****************To Do********************
bool checkOdd(int number) {
	if (number % 2 == 1)
		return true;
}


/* Write a function checkPrime such that
input: an int
output: boolean
function: Return true if the number is a prime number and return false otherwise
HINT: The prime number is th number that is divisible to the 1 and itself.
2,3,5,7,11,13,17,19,... are prime numbers;
*/
//TO DO **************************************
bool checkPrime(int number) {
	for (int i = 2; i < number; i++) {
		if (number % i == 0)
			return false;
		}
		return true;
}


/* Write a function findPrime such that
input: an array of int and size of array
output: nothing
function: Display the prime numbers of the array
Feel free to use the function that you implemented above
*/
//TO DO **************************************
void findPrime(int array[], int size){
	for (int i = 0; i < size; i++) {
		if (checkPrime(array[i]))
			cout << array[i]  << " ";
	}
}


/* Write a function checkPalindrome_String such that
input: String
output: boolean
function: Check whether a given string is palindrome.
Palindrome means if I reverse it (reading from end to front), it would be the same. like Hannah , Bob, RACECAR
Hint: string is like an array of character ; s.size() returns the size of string s
*/
//TO DO **************************************
bool checkPalindrom_String(string word) {
	int size = word.size();
	for (int i = 0; i < size; i++) {
		if (word.at(i) != word.at((size-1) - i)) {
			return false;
		}
	}
	return true;
}


/* Write a function SumofPrimes such that
input: an int
output: nothing
function: Check whether a given number can be expressed as a sum of two prime number, then display (cout) two prime numbers if it is possible
If there are multiple prime numbers that can be sum up, you should display all of them. (check the main below)
*/
//TO DO **************************************
void SumOfPrimes(int num) {
	for (int i = 1; i <= (num / 2); i++) {
		if (checkPrime(i))
			if (checkPrime(num - i))
				cout << num << " = " << i << " + " << (num - i) << endl;
	}
}

int main()
{
	//This should return true
	cout << "33 is an odd number, so your output should be 1, your output is ";
	cout << checkOdd(33) << endl;
	//This should return false
	cout << "98 is not an odd number, so your output should be 0, your output is ";
	cout << checkOdd(98) << endl;

	//This should return true
	cout << "79 is a prime number, so your output should be 1, your output is ";
	cout << checkPrime(79) << endl;
	//This should return false
	cout << "98 is not a prime number, so your output should be 0, your output is ";
	cout << checkPrime(98) << endl;

	/* The output of this section should be
	This prime numbers are : 2, 7, 11
	*/
	int A[5] = { 2,55, 7, 44, 11 };
	cout << "The output should be 2,7,11, your output is ";
	findPrime(A, 5);


	//This should return true
	cout << " HANNAH is palindrome, you should return 1. You return ";
	cout << checkPalindrom_String("HANNAH") << endl;
	//This should return false
	cout << " CARRA is not palindrome, you should return 0. You return ";
	cout << checkPalindrom_String("CARRA") << endl;



	/* The output of this section should be
	34 = 3 + 31
	34 = 5 + 29
	34 = 11 + 23
	34 = 17 + 17
	*/
	SumOfPrimes(34);

	return 0;
}