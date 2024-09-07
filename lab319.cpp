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

	int valueRed;
	int valueGreen;
	int valueBlue;
	int smallestValue;

	cout << "Red value: " << endl;
	cin >> valueRed;

	cout << "Green value: " << endl;
	cin >> valueGreen;

	cout << "Blue value: " << endl;
	cin >> valueBlue;
	
	if ((valueRed <= valueGreen) && (valueRed <= valueBlue)) {
		smallestValue = valueRed;
	}
	else if ((valueGreen <= valueRed) && (valueGreen <= valueBlue)) {
		smallestValue = valueGreen;
	}
	else {
		smallestValue = valueBlue;
	}
	
	valueRed   -= smallestValue;
	valueGreen -= smallestValue;
	valueBlue  -= smallestValue;

	cout << valueRed << endl << valueGreen << endl << valueBlue << endl;
}

