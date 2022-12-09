#include "Functions.h"
#include <iostream>
#include <string>

using namespace std;

void main() {
	char userInput;

	cout << "Palindrome Check" << endl;
	do {
		PalindromeOutput();
		cout << endl << "Press \"q\" to quit" << endl << "Press any other letter to continue" << endl;
		cin >> userInput;
	} while (tolower(userInput) != 'q');
}