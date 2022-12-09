#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

#include <string>
#include <map>

using namespace std;

/* Outputs the key and values of the map
   pre: Having a map with values
   post: The keys and values are output to the user
*/
void OutputDataMap(map<string, string> dataMap);

/* The value associated with a particular key is output
   pre: none
   post: The value of a proper key is output but if the key is improper then an error is returned
*/
void OutputMapValue(map<string, string> dataMap);

#endif