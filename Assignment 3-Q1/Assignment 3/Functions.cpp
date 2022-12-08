#include "Functions.h"
#include <iostream>
#include <queue>
using namespace std;

void MoveToRear(queue<int>& currentQueue) {
	//The value of the front is pushed to the back
	currentQueue.push(currentQueue.front());
	//The front value is removed 
	currentQueue.pop();
}

void OutputQueue(queue<int> currentQueue) {
	while (!currentQueue.empty()) {
		cout << currentQueue.front() << " ";
		currentQueue.pop();
	}
	cout << endl;
}