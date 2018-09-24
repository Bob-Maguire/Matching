#include "Order.h"
#include <string>
using namespace std;

Order::Order(int id, string orderer)
{
	o_id = id;
	o_orderer = orderer;
}

void Order::setId(int id) {
	o_id = id;
}

void Order::setOrderer(string orderer)
{
	o_orderer = orderer;
}

/*int Order::checkOrder(string potential)
{
	parsePipe(potential);
	return 0;
}
*/

	