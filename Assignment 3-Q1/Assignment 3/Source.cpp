#include "Functions.h"
#include <iostream>
#include <queue>

using namespace std;

void main() {
	queue<int> valueQueue;
	char userInput = 'q';


	valueQueue.push(2);
	valueQueue.push(1);
	valueQueue.push(3);
	valueQueue.push(17);
	valueQueue.push(5);

	cout << "Move To Rear" << endl << endl;
	cout << "Current queue:" << endl;
	OutputQueue(valueQueue);

	do {
		cout << endl << "Press \"q\" to quit" << endl << "Press \"m\" to move the front value to the rear" << endl;
		cin >> userInput;
		if(tolower(userInput) == 'm'){
			MoveToRear(valueQueue);
			cout << "Updated queue:" << endl;
			OutputQueue(valueQueue);
		}
	} while (tolower(userInput) != 'q');



}