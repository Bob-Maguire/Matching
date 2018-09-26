#pragma once

#include <iostream>
#include <string>
#include <map>
#include <cstdbool>

using std::string;
using std::map;

map<int, string> parsePipe(string piped);
static int splitEntry(char **tag, char **value, string entry);