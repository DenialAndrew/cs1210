/********************************************************
* Summary: HW2: Using Branching (filename is lab319.cpp)
*
* Author: Andrew Denial
* Created: Sept 7 2024
********************************************************/

#include <iostream>
#include <string>

using namespace std;

int main() {

	// Declaring variables for the 3 RGB values 
	// Declaring value for the smallest value whihc is used later
	int valueRed;
	int valueGreen;
	int valueBlue;
	int smallestValue;

	// Gets the integer inputs for the 3 RGB values
	cin >> valueRed;
	cin >> valueGreen;
	cin >> valueBlue;
	
	// If-else branch which determines what the smallest value is
	if ((valueRed <= valueGreen) && (valueRed <= valueBlue)) {
		smallestValue = valueRed;
	}
	else if ((valueGreen <= valueRed) && (valueGreen <= valueBlue)) {
		smallestValue = valueGreen;
	}
	else {
		smallestValue = valueBlue;
	}
	
	// Subtracts the smallest value from each of the RGB values
	valueRed   -= smallestValue;
	valueGreen -= smallestValue;
	valueBlue  -= smallestValue;

	// Outputs (prints) the 3 RGB values in the desired format
	cout << valueRed << " " << valueGreen << " " << valueBlue << endl;
}

