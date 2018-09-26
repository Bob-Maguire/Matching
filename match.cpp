// match.cpp
// Barebones matching engine using modified FIX protocol
// Bobby Maguire, September 2018

#include <iostream>
#include <string>
#include <map>
#include "parse.h"
#include "order.h"

using namespace std;

int main() {
	cout << "Well here we go!\n";
	Order tester = Order(1, "bing");
	cout << tester.getId();
	tester.setId(5);
	cout << tester.getId() << endl;

	cout << tester.getOrderer() << endl;
	tester.setOrderer("Monkees");
	cout << tester.getOrderer() << endl;
	string test = "1=1|2=orderer";
	parsePipe(test);
	map<int, string> test_order;
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