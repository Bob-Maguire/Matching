// match.cpp
// Barebones matching engine using modified FIX protocol
// Bobby Maguire, September 2018

#include <iostream>
#include <string>
#include <map>
#include "parse.h"
#include "order.h"

using namespace std;

int handleOrder(string test);

int main() {
	handleOrder("1=1 | 2=orderer");
	return 0;
}

int handleOrder(string test) {
	Order tester = Order();
	tester.setOrder(test);
	cin.get();
	return 0;
}