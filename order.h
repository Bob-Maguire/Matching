#pragma once
#include <string>
#include <map>
#include <list>
#include "parse.h"
using std::string;

class Order
{
private:
	int o_id;
	string o_orderer;
public:
	Order();

	void setOrder(string ord);
	void setId(int id);
	void setOrderer(string orderer);

	int checkOrder(map<int, string> potential);

	int getId() { return o_id; }
	string getOrderer() { return o_orderer; }

	//int checkOrder(string potential);
};

