#include "order.h"
using namespace std;

Order::Order()
{
	int o_id = -1;
	string o_orderer = "";
}

void Order::setOrder(string ord)
{
	map<int, string> order_m = parsePipe(ord);
	checkOrder(order_m);
	o_id = stoi(order_m[1]);
	o_orderer = order_m[2];
}

void Order::setId(int id) {
	o_id = id;
}

void Order::setOrderer(string orderer)
{
	o_orderer = orderer;
}

int Order::checkOrder(map<int, string> potential)
{
	list<int> id_list(1, 2);
	for (auto it = id_list.begin(); it != id_list.end(); ++it) {
		if (potential.find(*it) == potential.end()) {
			cout << "Order missing required id " << *it << endl;
			return *it;
		}
	}
	cout << "Order is proper" << endl;
	return 0;
}


	