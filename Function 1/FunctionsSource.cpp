// Valan Adan
// Date: 01/24/24
// Class: CSCI 2380 02P
// Semester: Spring 2024
// Instructor: Marzieh Ayati

#include <iostream> // Used for cin and cout
using namespace std; // making life easier so taht we do not need to use std::cin , std::cout, etc.

//Write the function called locateSmallest in the given interval such that
// output : int:  the smallest value in the array
// input : an array of int, the starting index of search, the ending point of searchspace
// function: find the smallest value of array in the given interval


//****************To Do********************
int locateSmallest(int array[], int start, int end) {
	int smallest = array[start];
	for (start; start < end; start++) {
		if (smallest > array[start + 1])
			smallest = array[start + 1];
	}
	return smallest;
}

//Write the function called locateIndexOfSmallest in the given interval such that
// output : int: index of the smallest value in the array
// input : an array of int, the starting index of search, the ending point of searchspace
// function: find the location (i.e index) of the smallest value of array in the given interval
// Note that I don't want the smallest value

//****************To Do********************
int locateIndexOfSmallest(int array[], int start, int end) {
	int smallInd = start;
	int small = array[start];
	for (start; start < end; start++) {
		if (array[start + 1] < small) {
			small = array[start + 1];
			smallInd = start + 1;
		}
	}
	return smallInd;
}


//Write the function called ReplaceVariable in the given interval such that
// output : you decide what is the output
// input : an array of int, the targetvalue we are searching for, an int which is the starting index of search, an int which is the ending point of searchspace
// function: Search in the array from given start to end index and replace the given target value with 1000

//****************To Do********************
void ReplaceVariable(int array[], int target, int start, int end) {
	for (start; start < end; start++) {
		if (array[start] == target)
			array[start] = 1000;
	}
}


//write a function called printArray to print out the elements of the give array
//output: void
//input: the array and its size
//****************To Do********************
void printArray(int array[], int size) {
	for (int i = 0; i < size; i++) {
		cout << array[i] << " ";
	}
}


int main()
{

	int myarray[] = { 16, 3, 77, 40, 20,40,44,40,90 };
	int target = 40;

	//****************To Do********************
	//calling locateSmallest on myarray from index 2 to 8
	// output should be : 4
	cout << "The smallest value is 20, your result is " << locateSmallest(myarray, 2, 8) << endl;
	cout << "The smallest value is at the index 4, your result is " << locateIndexOfSmallest(myarray, 2, 8) << endl;

	//****************To Do********************
	//To Do: call ReplaceVariable on myarray to replace target between 3 to 7
	ReplaceVariable(myarray, 40, 3, 7);

	//To Do : call the printArray on myarray
	//output should be: 16 3 77 1000 20 1000 44 40 90
	printArray(myarray, 9);

	return 0;
}