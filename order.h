#pragma once
#include <string>
using std::string;

class Order
{
private:
	int o_id;
	string o_orderer;
public:
	Order(int id, string orderer);

	void setId(int id);
	void setOrderer(string orderer);

	int getId() { return o_id; }
	string getOrderer() { return o_orderer; }

	//int checkOrder(string potential);
};

