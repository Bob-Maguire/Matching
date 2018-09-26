// match.cpp
// Barebones matching engine using modified FIX protocol
// Bobby Maguire, September 2018

#include <iostream>
#include <string>
#include <map>
#include <cstdbool>
#include "parse.h"
#include "order.h"

using namespace std;

int main() {
	cout << "Well here we go!\n";
	
	string test = "1=1 | 2=orderer";
	map<int, string> test_order = parsePipe(test);
	if (test_order[-1].compare("empty") == 0) return -1;
	
	//cout << test_order.find(1);
	//test_order = parsePipe(test);
	//test_order = parsePipe(test);
	//cout << test_order.size();
	/*if (isOrder(order)) {
		
	}
	else {
		return 1;
	}
	*/
	cin.get();
	return 0;
}