// match.cpp
// Barebones matching engine using modified FIX protocol
// Bobby Maguire, September 2018

#include <iostream>
#include <string>
#include "Order.h"
#include "parse.h"
#include <map>

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
	string test = "id = 1 | name = orderer";
	map <string, int> order;
	order = parsePipe(test);
	cout << order.size();
	/*if (isOrder(order)) {
		
	}
	else {
		return 1;
	}
	*/
	cin.get();
	return 0;
}