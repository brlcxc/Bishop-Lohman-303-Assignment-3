#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

#include <queue>

using namespace std;

/* The user inputs a word
   pre: none
   post: a string is returned
*/
void MoveToRear(queue<int>& currentQueue);

/* The queue is output
   pre: The queue is not empty
   post: The contents of the queue are output
*/
void OutputQueue(queue<int> currentQueue);

#endif