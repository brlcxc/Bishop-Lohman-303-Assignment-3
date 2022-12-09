#include "Functions.h"
#include <iostream>
#include <string>
#include <map>

using namespace std;

void main() {
	string h, j;
	map<string, string> stateDataMap;
	char userInput;

	stateDataMap.insert(pair<string, string>("Nebraska", "Lincoln"));
	stateDataMap.insert(pair<string, string>("New York", "Albany"));
	stateDataMap.insert(pair<string, string>("Ohio", "Columbus"));
	stateDataMap.insert(pair<string, string>("California", "Sacremento"));
	stateDataMap.insert(pair<string, string>("Massachusetts", "Boston"));
	stateDataMap.insert(pair<string, string>("Texas", "Austin"));

	OutputDataMap(stateDataMap);
	stateDataMap["California"] = "Los Angeles";
	OutputDataMap(stateDataMap);

	cout << "Finding the capital of a state" << endl;

	do {
		cout << "Press \"q\" to quit" << endl << "Press \"c\" to find the capital associated with a state" << endl;
		cin >> userInput;

		if (tolower(userInput) == 'c') {
			OutputMapValue(stateDataMap);
		}
	} while (tolower(userInput) != 'q');
}