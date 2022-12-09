#include "Functions.h"
#include <iostream>
#include <string>
#include <map>
using namespace std;

void OutputDataMap(map<string, string> dataMap) {
	cout << "State and capital map" << endl;
	for (map<string, string>::iterator itr = dataMap.begin(); itr != dataMap.end(); ++itr) {
		cout << itr->first << ", " << itr->second << endl;
	}
	cout << endl;
}

void OutputMapValue(map<string, string> dataMap){
	string stateName;

	cout << "Enter a State to find the capital" << endl;
	cin.ignore();
	getline(cin, stateName);
	
	if (dataMap.find(stateName) == dataMap.end()) {
		cout << "Capital Not Found" << endl << endl;
	}
	else {
		cout << "The capital of " << stateName << " is " << dataMap[stateName] << endl << endl;
	}
}
