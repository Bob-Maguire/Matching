#include <iostream>
#include <string>
#include <map>
#include <cstdbool>
#include "parse.h"

using namespace std;

// parsePipe returns a map of a parsed Pipe Delineated string
// "id=1|name=orderer"
map <string, int> parsePipe(string piped) {
	map <string, int> order;
	string key;
	string value;
	unsigned ki = 0;
	unsigned vi = 0;
	for (unsigned i = 0; i < piped.length(); i++) {
		if (k == true) {
			if (piped[i] == '=') {
				k = false;
				ki = 0;
			}
			else if (piped[i] == '|') {
				cout << "beep";
			}
			else {
				key[ki] = piped[i];
				ki++;
			}
		}
		else if (k == false) {
			if (piped[i] == '|') {
				k = true;
				vi = 0;
				order.insert(key, value);
			}
			else if (piped[i] == '=') {
				cout << "beep 2";
			}
			else {
				value[vi] = piped[i];
				vi++;
			}
		}
	}
	return order;
}