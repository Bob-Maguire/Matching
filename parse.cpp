#include "parse.h"

using namespace std;

// parsePipe returns a map of a parsed Pipe Delineated string
// "id=1 | name=orderer"
map<int, string> parsePipe(string piped) {
	map<int, string> order;
	char *tag = NULL;
	char *value = NULL;
	if (piped.empty()) {
		cerr << "Order empty";
		order[-1] = "empty";
	}
	else {
		order[-1] = "present";
	}
	string entry;
	unsigned e = 0;
	for (unsigned i = 0; i < piped.length(); i++) {
		if (piped[i] != '|') {
			
			cout << piped[i] << endl;
			//e++;
		}
		else {
			piped[i] = '\0';
			splitEntry(&tag, &value, entry);

		}
	}
	return order;
}

int splitEntry(char ** tag, char ** value, string entry)
{
	unsigned ei = 0;
	*tag = &(entry[ei]);
	while (entry[ei] != '=') {
		ei++;
	}
	entry[ei] = '\0';

	return 0;
}
