#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

#include <string>

using namespace std;

/* A boolean value is returned indicating if the string is a palindrome
   pre: a string of size greater than one must be input
   post: a boolean value is returned
*/
bool PalindromeCheck(string leftHalf, string rightHalf = "");

/* The user inputs a word
   pre: none
   post: a string is returned
*/
string PalindromeInput();

/* Wether or not the word is palindrome is input
   pre: none
   post: the user is told wether or not the string is a plaindrome
*/
void PalindromeOutput();

#endif