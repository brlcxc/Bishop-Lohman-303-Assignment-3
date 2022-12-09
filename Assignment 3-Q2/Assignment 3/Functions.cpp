#include "Functions.h"
#include <iostream>
#include <string>
using namespace std;


bool PalindromeCheck(string leftHalf, string rightHalf) {
	//This is the base case where the halves are checked to so if they are semetrical once both halves are equal
	if (leftHalf.size() - 1 < rightHalf.size()) {
		return leftHalf == rightHalf;
	}
	//This is one recursive case used for strings with an odd number of characters
	//If the size of the left -1 equals the right then the function is called again but with rightmost character removed on the left
	//This removes the center character of the original word
	else if (leftHalf.size() - 1 == rightHalf.size()) {
		return PalindromeCheck(leftHalf.substr(0, leftHalf.size() - 1), rightHalf);
	}
	//This is the normal recusrive case where the rightmost character on the left is moved to the end of the right
	return PalindromeCheck(leftHalf.substr(0, leftHalf.size() - 1), rightHalf + leftHalf.substr(leftHalf.size() - 1));
}

string PalindromeInput() {
	string userInput;

	cout << endl << "Enter a word to see if it is a palindrome" << endl;
	cin >> userInput;
	return userInput;
}

void PalindromeOutput() {
	string userInput;

	userInput = PalindromeInput();

	//This statement uses the boolean value from PalindromeCheck to output to the user whether the word is a palindrome
	if (PalindromeCheck(userInput)) {
		cout << "The word " << userInput << " is a palindrome" << endl;
	}
	else {
		cout << "The word " << userInput << " is a not palindrome" << endl;
	}
}