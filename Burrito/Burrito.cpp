// Valan Adan
// Samuel Sosa
// Date: 01/24/24
// Class: CSCI 2380 02P
// Semester: Spring 2024
// Instructor: Marzieh Ayati
#include "Burrito.h"

Burrito::Burrito(string m, bool cheese){
	meatType = m;
	hasCheese = cheese;
}

Burrito::Burrito() {
	meatType = "Nada";
	hasCheese = false;
}

void Burrito::change_meat(string m) {
	meatType = m;
}

void Burrito::add_cheese() {
	hasCheese = true;
}

void Burrito::remove_cheese() {
	hasCheese = false;
}

string Burrito::meat() {
	return meatType;
}

bool Burrito::cheese() {
	return hasCheese;
}

int Burrito::price() {
	if (hasCheese == true) {
		if (meatType != "Asada") {
			if (meatType == "Nada")
				return 3;
			else
				return 5;
		}
		else
			return 6;
	}
	else if (hasCheese == false) {
		if (meatType != "Asada") {
			if (meatType == "Nada")
				return 2;
			else
				return 4;
		}
		else
			return 5;
	}
	else 
		return 0;
}