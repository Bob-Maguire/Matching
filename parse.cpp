#include "parse.h"

using namespace std;

string trim(string& str) {
	size_t st = str.find_first_not_of(' ');
	size_t en = str.find_last_not_of(' ');
	return str.substr(st, en - st + 1);
}

// parsePipe returns a map of a parsed Pipe Delimited string
// "id=1 | name=orderer"
map<int, string> parsePipe(string piped) {
	map<int, string> order;
	vector<string> vect;
	stringstream ss(piped);
	queue<string> entries;

	int i;

	while (ss.good()) {
		string entry;
		getline(ss, entry, '|');
		vect.push_back(entry);
	}
	for (i = 0; i < vect.size(); i++) {
		vect.at(i) = trim(vect.at(i));
		entries.push(vect.at(i));
	}
	while (entries.empty() == false) {
		vector<string> evect;
		stringstream sse(entries.front());
		string ids;
		string det;
		getline(sse, ids, '=');
		vect.push_back(ids);
		getline(sse, det, '=');
		int id = stoi(ids);
		order[id] = det;
		entries.pop();
	}
	return order;
}